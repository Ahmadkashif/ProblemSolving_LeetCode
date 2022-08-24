class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> res(nums1.size(), -1);
        for (int i = 0; i < nums1.size(); i++)
        {
            bool jFound = false;
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums1[i] == nums2[j])
                    jFound = true;
                if (jFound && nums2[j] > nums1[i])
                {
                    res[i] = nums2[j];
                    break;
                }
            }
        }
        return res;
    }
};

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &findNums, vector<int> &nums)
    {
        stack<int> s;
        unordered_map<int, int> m;
        for (int n : nums)
        {
            while (s.size() && s.top() < n)
            {
                m[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }
        vector<int> ans;
        for (int n : findNums)
            ans.push_back(m.count(n) ? m[n] : -1);
        return ans;
    }
};