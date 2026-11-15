s32 func(u32 a)
{
    s32 r = -1;
    if (a & 0x400) r = 0;
    else if (a & 0x800) r = 1;
    else if (a & 0x1000) r = 2;
    else if (a & 0x2000) r = 3;
    else if (a & 0x4000) r = 4;
    else if (a & 0x8000) r = 5;
    else if (a & 0x10000) r = 6;
    else if (a & 0x20000) r = 7;
    else if (a & 0x40000) r = 8;
    else if (a & 0x80000) r = 9;
    else if (a & 0x100000) r = 10;
    else if (a & 0x200000) r = 11;
    else if (a & 0x400000) r = 12;
    return r;
}
