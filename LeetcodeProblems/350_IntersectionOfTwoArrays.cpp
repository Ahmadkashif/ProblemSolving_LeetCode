#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> results;
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        for (int i = 0; i < nums1.size(); i++)
        {
            for(int j = 0; j < nums2.size();j++){
                if(nums1[i] == nums2[j])
                results.push_back(nums1[i]);
            }
        }
        return results;
    }
};