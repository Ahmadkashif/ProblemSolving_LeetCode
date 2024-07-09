class Solution
{
public:
    void swap(vector<int> &nums, int a, int b)
    {
        nums[a] = nums[a] + nums[b];
        nums[b] = nums[a] - nums[b];
        nums[a] = nums[a] - nums[b];
    }
    
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int sortedI = nums.size() - 1, max = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            max = 0;
            for (int j = 0; j < sortedI; j++)
            {
                if (nums[j] % 2 == 1)
                {
                    swap(nums, j, sortedI);
                    sortedI--;
                    break;
                }
            }
        }
        return nums;
    }
};