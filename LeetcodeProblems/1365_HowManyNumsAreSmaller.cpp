#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int size = 0, current = 0;
    vector<int> results;
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        int count;
        for (int i = 0; i < nums.size(); i++)
        {
            count = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] > nums[j])
                    count++;
            }
            results.push_back(count);
        }

        return results;
    }
    int getCount(vector<int> nums, int comp = 0)
    {
        if (comp >= nums.size())
            return 0;
        else if (nums[current] > nums[comp])
            return 1 + getCount(nums, ++comp);
        else
            return 0 + getCount(nums, ++comp);
    }
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        if (current < nums.size())
        {
            results.push_back(getCount(nums));
            current++;
            smallerNumbersThanCurrent(nums);
        }
        return results;
    }
};