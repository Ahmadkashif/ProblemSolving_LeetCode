// class Solution
// {
// public:
//     vector<int> twoSum(vector<int> &nums, int t)
//     {
//         int end = nums.size() - 1;
//         int start = 0;
//         vector<int> result;

//         while (start < end)
//         {

//             if (nums[start] + nums[end] == t)
//             {
//                 result.push_back(++start);
//                 result.push_back(++end);
//                 break;
//             }
//             else if (nums[start] + nums[end] < t)
//             {
//                 start++;
//             }
//             else
//             {
//                 end--;
//             }
//         }
//         return result;
//     }
// };

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int t)
    {
        if (nums.size() == 2)
            return {1, 2};
        vector<int> result(1, 0);
        for (int i = 0; i < nums.size() - 1; i++)
        {
            result[0] = i + 1;
            int s = i + 1, e = nums.size() - 1, mid;
            while (s <= e)
            {
                mid = (e - s) / 2 + s;
                if (nums[i] + nums[mid] == t)
                {
                    result.push_back(mid + 1);
                    return result;
                }
                else if (nums[i] + nums[mid] < t)
                    s = mid + 1;
                else
                    e = mid - 1;
            }
        }
        return result;
    }
};