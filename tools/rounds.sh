#!/usr/bin/env bash
# Rondas que se alimentan solas: reintento de fallidas (solo ROCm/kyr) + permuter + export.
# Cada match entra en la biblioteca y ayuda a la ronda siguiente. Para cuando una ronda gana < 2 matches.
cd "$(dirname "$0")/.." || exit 1
A=(--elf SCES_502.46 --wibo toolchain/wibo --comp toolchain/comp --out build/llm2 --sort --min-len 5 --max-len 200 --tries 8 --retry-failed --workers 2)
count() { python3 - <<'P'
import json,glob
print(sum(1 for f in glob.glob('build/llm2/*.json') if json.load(open(f))['match']))
P
}
while pgrep -f "tools/llm_match.py" >/dev/null; do sleep 30; done
for r in 1 2 3 4; do
  before=$(count)
  nf=$(python3 - <<'P'
import json,glob
print(sum(1 for f in glob.glob('build/llm2/*.json') if not json.load(open(f))['match']))
P
)
  h=$nf
  echo "== ronda $r: $before matches, $nf fallidas =="
  python3 tools/llm_match.py "${A[@]}" --url http://127.0.0.1:8861 --skip 0 --n "$h" &
  python3 tools/llm_match.py "${A[@]}" --url http://127.0.0.1:8900 --reverse --skip 0 --n 2000 &  # CUDA (Xive) via la réplica 8900 si responde; si no, el proceso termina solo
  wait
  python3 tools/permute_pass.py --seconds 180 --workers 8
  python3 tools/export_stats.py
  after=$(count); echo "ronda $r: $before -> $after"
  [ $((after-before)) -lt 2 ] && break
done
echo "== fin de rondas =="
