class Solution
{
public:
    vector<int> sortArrayByParityII(vector<int> &nums)
    {
        vector<int> e;
        vector<int> o;
        for (int n : nums)
        {
            if (n % 2 == 0)
                e.push_back(n);
            else
                o.push_back(n);
        }
        for (int i = 0; i < nums.size(); i = i + 2)
        {
            nums[i] = e.back();
            e.pop_back();
            nums[i + 1] = o.back();
            o.pop_back();
        }
        return nums;
    }
};