class Solution
{
public:
    void Nto1(int n)
    {
        if (n == 1)
            cout << n;
        else{
            cout << n;
            Nto1( n - 1);
        }
    }
};