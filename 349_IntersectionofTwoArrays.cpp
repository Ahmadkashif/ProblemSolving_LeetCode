#include <map>
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> st(nums1.begin(), nums1.end());
        vector<int> res;
        for (int itr = 0; itr < nums2.size(); itr++)
        {
            if (st.find(nums2[itr]) != st.end())
            {
                res.emplace_back(nums2[itr]);
                st.erase(nums2[itr]);
            }
        }
        return res;
    }
};