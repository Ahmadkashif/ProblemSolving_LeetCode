class Solution
{
public:
    vector<int> findRightInterval(vector<vector<int>> &intervals)
    {
        vector<int> result;
        int sMin = INT_MIN;
        for (int i = 0; i < intervals.size(); i++)
        {
            if (intervals[i][0] < intervals[i][1])
            {
                result.push_back(-1);
                sMin = INT_MIN;
                for (int j = 0; j < intervals.size(); j++)
                {
                    if (i != j)
                    {
                        if (intervals[j][0] >= intervals[i][1])
                        {
                            if (sMin > intervals[j][0])
                            {
                                sMin = intervals[j][0];
                                result[result.size() - 1] = j;
                            }
                        }
                    }
                }
            }
            else
                result.push_back(i);
        }
        return result;
    }
};