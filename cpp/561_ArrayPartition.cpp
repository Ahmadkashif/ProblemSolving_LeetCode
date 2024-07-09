class Solution
{
public:
    int min(int a, int b)
    {
        return (a <= b ? a : b);
    }
    int arrayPairSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int sum = 0;
        int *ptr1, *ptr2;
        for (int i = 0; i < nums.size(); i += 2)
        {
            ptr1 = &nums[i];
            ptr2 = &nums[i + 1];
            sum += min(*ptr1, *ptr2);
        }
        return sum;
    }
};