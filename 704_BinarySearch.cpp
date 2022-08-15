class Solution
{
public:
    int binarySearch(vector<int> &nums, int s, int e, int t)
    {
        int mid = (e - s) / 2 + s;

        if (s > e)
            return -1;

        if (nums[mid] == t)
            return mid;
        else if (nums[mid] < t)
            return binarySearch(nums, mid + 1, e, t);
        else
            return binarySearch(nums, s, mid - 1, t);
    }
    int search(vector<int> &nums, int target)
    {
        return binarySearch(nums, 0, nums.size() - 1, target);
    }
};