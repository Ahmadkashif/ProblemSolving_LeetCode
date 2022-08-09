class Solution
{
public:
    int arrangeCoins(int n)
    {
        int cRows = 0;
        if (n == 1)
            return 1;
        for (int i = 1; i <= n; i++)
        {

            if (n - i >= 0)
                cRows++;
            n -= i;
        }
        return cRows;
    }
};