class Solution
{
public:
    int getSum(int n, int t)
    {
        if (n == t)
            return n;
        else
            return n + getSum(n + 1, t);
    }
    int sumArray(vector<int> &nums, int s)
    {
        if (nums.size() - 1 == s)
            return nums.at(s);
        else
            return nums.at(s) + sumArray(nums, s + 1);
    }
    int missingNumber(vector<int> &nums)
    {
        int orgSum = getSum(0, nums.size());
        int givenSum = sumArray(nums, 0);

        return orgSum - givenSum;
    }
};