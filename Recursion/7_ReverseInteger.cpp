class Solution
{
public:
    int reverse(int n)
    {
        int *ptr;
        int x = 0, r = 0;
        ptr = &x;
        long long ans = reverseNo(n, r, ptr);
        return ans < INT_MIN || ans > INT_MAX ? 0 : ans;
    }
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
};