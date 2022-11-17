#include <iostream>
#include <vector>

using namespace std;

// vector<int> getConcatenation(vector<int> &nums)
// {
//     int size = nums.size();
//     for (int i = 0; i < size; i++)
//     {
//         nums.push_back(nums[i]);
//     }
//     return nums;
// }

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans1 (n);
        vector<int> ans2 (n);
        // create an array of size 2 x n
        
        for (int i = 0; i < n ; i++)
        {
            ans1[i] = nums[i];
        }
        
        for ( int i =  0; i < n ; i++ )
        {
            ans2[i] = nums[i];
        }
        return ans;
    }
};
