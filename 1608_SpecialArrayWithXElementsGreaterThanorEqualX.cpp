class Solution
{
public:
    void merge(vector<int> &nums, int s, int mid, int e)
    {
        int lSize = mid - s + 1;
        int rSize = e - mid;

        vector<int> l, r;

        for (int i = 0; i < lSize; i++)
            l.push_back(nums[i + s]);

        for (int i = 0; i < rSize; i++)
            r.push_back(nums[i + mid + 1]);

        int i = 0, j = 0;
        while (i < lSize && j < rSize)
        {
            if (l[i] < r[j])
                nums[s++] = l[i++];
            else
                nums[s++] = r[j++];
        }
        while (i < lSize)
        {
            nums[s++] = l[i++];
        }
        while (j < rSize)
        {
            nums[s++] = r[j++];
        }
    }
    void mergeSort(vector<int> &nums, int s, int e)
    {
        if (s < e)
        {
            int mid = (e - s) / 2 + s;

            mergeSort(nums, s, mid);
            mergeSort(nums, mid + 1, e);

            merge(nums, s, mid, e);
        }
    }

    int specialArray(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());
        // O(NlogN)
        const int N = nums.size();

        if (nums[0] >= N)
            return N;

        int l = 1, r = N - 1;

        while (l <= r)
        { // O(LogN) * O(1)
            int m = l + (r - l) / 2;
            if (nums[m] >= (N - m) && nums[m - 1] < (N - m))
                return (N - m);
            else if (nums[m] >= (N - m))
                r = m - 1;
            else
                l = m + 1;
        }
        return -1;
    }
};

// [ 0 0 3 4 4]