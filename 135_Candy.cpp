class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        int len = ratings.size(), res = 0, i;
        if (len > 0)
        {
            vector<int> number(len, 0); // to save the number of candies for child[0:N-1]
            number[0] = 1;
            // forward scan to calculate how many candies needed for child i to make sure it has more candies than its left neighbor if it has a higher rate, otherwise, give one candy to it
            for (i = 1; i < len; ++i)
                number[i] = ratings[i] > ratings[i - 1] ? number[i - 1] + 1 : 1;

            // backward scan to calculate to make sure child i has more candies than its right neighbor if it has a higher rate, pick the bigger one from forward and backward scans as the final number for child i
            for (i = len - 2, res = number[len - 1]; i >= 0; --i)
            {
                if ((ratings[i] > ratings[i + 1]) && number[i] < (number[i + 1] + 1))
                    number[i] = number[i + 1] + 1;
                res += number[i];
            }
        }
        return res;
    }
};