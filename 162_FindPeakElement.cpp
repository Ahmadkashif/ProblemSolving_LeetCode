class Solution
{
public:
    int findPeakElement(const vector<int> &num)
    {
        return Helper(num, 0, num.size() - 1);
    }
    int Helper(const vector<int> &num, int low, int high)
    {
        if (low == high)
            return low;
        else
        {
            int mid1 = (low + high) / 2;
            int mid2 = mid1 + 1;
            if (num[mid1] > num[mid2])
                return Helper(num, low, mid1);
            else
                return Helper(num, mid2, high);
        }
    }
};

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;

        int s = 0, e = nums.size() - 1, mid = 0;

        while (s < e - 1)
        {
            mid = (e - s) / 2 + s;
            if ((nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1]))
                return mid;
            else if (nums[mid - 1] > nums[mid])
                e = mid - 1;
            else
                s = mid + 1;
        }
        return nums[s] > nums[e] ? s : e;
    }
};

// [2,1,0,1,2]      s < e - 1
0 1 2 3 4

    // [1,2,3,1]        s < e