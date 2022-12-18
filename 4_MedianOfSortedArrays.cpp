class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        double ans;
        int m = nums1.size(), n = nums2.size();

        // count the desired median position.
        int i = 0, j = 0;
        while (i < m && j < n)
        {
            if (nums1[i] < nums2[j])
                i++;
            else
                j++;

            if ((m + n) % 2 == 0)
        }

        return ans;
    }
};