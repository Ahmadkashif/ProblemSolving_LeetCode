class Solution
{
public:
    long getBinaryMovesNumber(long n)
    {
        if (n < 0)
            n *= -1;
        long int r = 0, res = 0;
        while (n)
        {
            res += (n % 2);
            r++;
            n /= 2;
        }
        return res;
    }
    int minBitFlips(int start, int goal)
    {
        int moves = 0, r = 1;
        // long n1 = getBinaryNumber(start^goal);
        // while(n1){
        //     moves += n1%10;
        //     n1/=10;
        // }
        return getBinaryMovesNumber(start ^ goal);
    }
};