class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &w1, vector<string> &w2)
    {
        int i2 = 0, j2 = 0, lmt2 = w2.size();
        for (string chunk1 : w1)
        {
            for (char c : chunk1)
            {
                if (c != w2[i2][j2++] || i2 == lmt2)
                    return false;
                if (j2 == w2[i2].size())
                {
                    i2++, j2 = 0;
                }
            }
        }
        return i2 == lmt2;
    }
};