class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 1)
            return strs[0];

        string longestCommon = strs[0];

        string ans = "";

        for(int i = 1; i < strs.size(); i++){
            string longest = "";
            int index = 0;
            for(int j = 0; j < strs[i].length(); j++){
                string s = strs[i];
                if(longestCommon[index++] == s[j])
                    longest += s[j];
                else break;
            }

            if(longestCommon=="")
                return "";

            longestCommon = longest;
        }
        return longestCommon;
    }
};