class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int s = 0, e = nums.size() - 1, mid;
        while (s < e)
        {
            mid = (e - s) / 2 + s;
            if (mid % 2 == 0)
                if (nums[mid + 1] == nums[mid])     s = mid + 1;
                else                                e = mid;
            else
                if (nums[mid - 1] == nums[mid])     s = mid + 1;
                else                                e = mid;
        }
        return nums[s];
    }
};