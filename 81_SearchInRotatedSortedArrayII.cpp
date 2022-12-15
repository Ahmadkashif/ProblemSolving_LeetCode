class Solution
{
public:
    bool search(vector<int> &nums, int t)
    {
        int s = 0, e = nums.size() - 1, mid = 0;

        while (s <= e)
        {

            mid = (e - s) / 2 + s;

            if (nums[mid] == t || nums[e] == t || nums[s] == t)
                return true;
            else if (nums[s] == nums[e])
            {
                s++;
                e--;
            }
            else if (nums[s] <= nums[mid])
            {
                if (nums[s] <= t && t <= nums[mid])
                    e = mid - 1;
                else
                    s = mid + 1;
            }
            else
            {
                if (nums[mid] <= t && t <= nums[e])
                    s = mid + 1;
                else
                    e = mid - 1;
            }
        }
        return false;
    }
};