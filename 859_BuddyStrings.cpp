class Solution
{
public:
    bool buddyStrings(string A, string B)
    {
        // Same length
        int len_A = A.size(), len_B = B.size();
        if (len_A != len_B)
            return false;

        // Repeat: same string, A needs repeated char, like "aab" "aab"
        int numChar_A = unordered_set<char>(A.begin(), A.end()).size();
        if (A == B && numChar_A < len_B)
            return true;

        // Swap: There should be only two to change
        vector<int> index_diff;

        for (int i = 0; i < len_A; i++)
        {
            if (A[i] != B[i])
                index_diff.push_back(i);
            if (index_diff.size() > 2)
                return false;
        }

        return index_diff.size() == 2 &&
               A[index_diff[0]] == B[index_diff[1]] &&
               A[index_diff[1]] == B[index_diff[0]];
    }
};