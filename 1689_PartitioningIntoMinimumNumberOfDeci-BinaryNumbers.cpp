class Solution
{
public:
    int minPartitions(string n)
    {
        int r, number = 0, max = -1;
        int rSize = n.length() - 1;

        for (char c : n)
        {
            if (max < (c - '0'))
                max = (c - '0');
        }
        return max;
    }
};