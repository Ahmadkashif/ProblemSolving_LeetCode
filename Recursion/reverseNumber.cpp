long long reverseNo(int n, int r, int *ptr)
{
    if (n < 10 && n > -10)
        return n;

    else if (n > 1)
    {
        *ptr = *ptr + 1;
        return reverseNo(n / 10, r + 1, ptr) + (n % 10) * pow(10, (*ptr) - r);
    }
    else
    {
        *ptr = *ptr + 1;
        return reverseNo(n / 10, r + 1, ptr) + (n % -10) * pow(10, (*ptr) - r);
    }
}