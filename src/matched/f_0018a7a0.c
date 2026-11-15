float func(float x)
{
    if (x < 0.5f) {
        return 1.0f - 2.0f * x * x;
    }
    x = 1.0f - x;
    return 2.0f * x * x;
}
