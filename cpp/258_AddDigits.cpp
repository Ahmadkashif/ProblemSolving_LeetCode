class Solution
{
public:
    int add(int n)
    {
        if (n < 10)
            return n;
        else
            return n % 10 + add(n / 10);
    }

    int addDigits(int num)
    {
        if (num < 10)
            return num;
        else
            return addDigits(add(num));
    }
};