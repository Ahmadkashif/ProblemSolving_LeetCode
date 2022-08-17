class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        vector<int> res;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == i){
                res.push_back(nums[i]);
                nums[i] = 0;
            }
            sum += nums[i];
        }
        return res;
    }
};