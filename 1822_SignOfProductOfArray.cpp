class Solution
{
public:
    int arraySign(vector<int> &nums)
    {

        int result = 0, product = 1;
        for (int n : nums)
        {
            if (n == 0)
                return 0;
            product = n > 0 ? product : -1 * product;
        }

        return product > 0 ? 1 : -1;
    }
};