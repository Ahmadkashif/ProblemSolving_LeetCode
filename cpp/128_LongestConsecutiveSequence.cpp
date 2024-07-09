class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int max_len = 0;
        unordered_set<int> num_set(nums.begin(), nums.end());
        for (int num : nums)
        {
            if (num_set.find(num - 1) == num_set.end())
            {
                int curr_num = num;
                int curr_len = 1;
                while (num_set.find(curr_num + 1) != num_set.end())
                {
                    curr_num++;
                    curr_len++;
                }
                max_len = max(max_len, curr_len);
            }
        }
        return max_len;
    }
};

// [1, 2, 3, 4, 100, 200]
//     |
// wSize = 6;
