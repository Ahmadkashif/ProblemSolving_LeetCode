class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int t)
    {
        int end = nums.size() - 1;
        int start = 0;
        vector<int> result;

        while (start < end)
        {

            if (nums[start] + nums[end] == t)
            {
                result.push_back(++start);
                result.push_back(++end);
                break;
            }
            else if (nums[start] + nums[end] < t)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        return result;
    }
};