class Solution
{
public:
    int searchInsert(vector<int> &nums, int t)
    {

        int s = 0, e = nums.size() - 1, mid = 0;

        while (s <= e)
        {
            mid = (e - s) / 2 + s;
            if (nums[mid] == t)
                return mid;
            else if (nums[mid] > t)
                e = mid - 1;
            else
                s = mid + 1;
        }
        return s;
    }
};