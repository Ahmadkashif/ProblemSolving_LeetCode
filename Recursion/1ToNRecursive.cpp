class Solution
{
public:
    void OneToN(int n)
    {
        if (n == 1)
        {
            cout << 1;
            return;
        }

        OneToN(n-1);
        cout << n;
    }
};