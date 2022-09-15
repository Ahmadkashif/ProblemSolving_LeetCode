class Solution
{
public:
    int searchInsert(vector<int> &nums, int t)
    {
        // if( nums.size() == 1) return nums.size()-1;
        int sIndex = 0,               // 0 1
            eIndex = nums.size() - 1, // 3 1
            mIndex;                   // 1 0
        while (sIndex < eIndex)
        {
            mIndex = (eIndex - sIndex) / 2 + sIndex;
            if (nums[mIndex] == t)
            {
                return mIndex;
            }
            else if (nums[mIndex] < t)
            {
                sIndex = mIndex + 1;
            }
            else
                eIndex = mIndex;
        }
        return (nums[sIndex] < t ? sIndex + 1 : sIndex);
    }
};

