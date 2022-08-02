#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
   int getSum(vector<int> &nums, int start, int end)
    {
       int sum = 0;
       if(start==end)
           return nums[start];
       
       for(int i = start; i <= end ; i++){
           sum += nums[i];
       }
       return sum;
//         if (start == end)
//             return 0;

//         else
//             return nums[start++] + getSum(nums, start, end);
    }

    int maxSubArray(vector<int> &nums)
    {
        int windowSize = nums.size();
        int start, end, max = INT8_MIN;

        while (windowSize > 0)
        {
            start = 0, end = windowSize - 1;
            while (end < nums.size())
            {
                int sum = getSum(nums, start, end);
                if (sum > max)
                    max = sum;
                start++;
                end++;
            }
            windowSize--;
        }

        return max;
    }
};