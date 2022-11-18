class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++)
            nums[i] += nums[i - 1]; // prefix sum calculation
        return nums;
    }
};
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        int sum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            sum = sum + nums[i];
            nums[i] = sum;
        }

        return nums;
    }
};