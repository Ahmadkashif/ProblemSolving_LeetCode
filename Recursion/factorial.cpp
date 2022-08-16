class Solution
{
public:
    int Fact(int n)
    {
        if (n == 1)
            return n;
        else
            return n * Fact(n - 1);
    }
};