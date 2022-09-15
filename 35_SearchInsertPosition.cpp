class Solution
{
public:
    int searchInsert(vector<int> &nums, int t)
    {
        int sIndex = 0,               
            eIndex = nums.size() - 1, 
            mIndex;                   
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

