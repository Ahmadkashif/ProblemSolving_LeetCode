class Solution
{
public:
    bool checkIfPangram(string s)
    {
        vector<int> indices(26);

        for (int i = 0; i < s.length(); i++)
        {
            indices[s.at(i) - 'a']++;
        }

        for (int i = 0; i < indices.size(); i++)
        {
            if (indices[i] == 0)
                break;
            if (i == indices.size() - 1 && indices[i] > 0)
                return true;
        }

        return false;
    }
};