class Solution
{
public:
    int search(vector<int> &nums, int t)
    {
        int s = 0,               // 0
            e = nums.size() - 1, // 6
            mid;                 // 3
        if (nums.size() == 1 && nums[0] == t)
            return 0;
        while (s <= e)
        {
            mid = (e - s) / 2 + s;
            if (nums[mid] == t)
            {
                return mid;
            }
            else if (nums[s] <= nums[mid])
            {
                if (nums[s] <= t && t <= nums[mid])
                    e = mid - 1;
                else
                    s = mid + 1;
            }
            else if (nums[mid + 1] <= nums[e])
            {
                if (nums[mid + 1] <= t && t <= nums[e])
                    s = mid + 1;
                else
                    e = mid - 1;
            }
        }
        return -1;
    }
};

// [4,5,6,7,0,1,2]