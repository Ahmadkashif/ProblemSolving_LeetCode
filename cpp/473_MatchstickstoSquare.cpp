class Solution
{
public:
    bool makesquare(vector<int> &nums)
    {
        int n = nums.size();

        long sum = accumulate(nums.begin(), nums.end(), 0l);
        if (sum % 4)
            return false;
        long sideLen = sum / 4;
        
        vector<int> usedMasks;

        vector<bool> validHalfSubsets(1 << n, false);

        // E.g., if n = 5, (1 << 5 - 1) = 11111 represents the whole set
        int all = (1 << n) - 1;
        // go through all possible subsets each represented by a bitmask
        for (int mask = 0; mask <= all; mask++)
        {
            long subsetSum = 0;
            // calculate the sum of this subset
            for (int i = 0; i < 32; i++)
            {
                if ((mask >> i) & 1)
                    subsetSum += nums[i];
            }
            // if this subset has what we want
            if (subsetSum == sideLen)
            {
                for (int usedMask : usedMasks)
                {
                    // if this mask and usedMask are mutually exclusive
                    if ((usedMask & mask) == 0)
                    {
                        int validHalf = usedMask | mask;
                        validHalfSubsets[validHalf] = true;
                        
                        if (validHalfSubsets[all ^ validHalf])
                            return true;
                    }
                }
                usedMasks.push_back(mask);
            }
        }
        return false;
    }
};