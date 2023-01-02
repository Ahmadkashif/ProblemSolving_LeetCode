class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<char> ind(95);
        vector<char> ind2(95);

        for(int i = 0; i < s.length(); i++){
            if(ind[ s[i] - ' ' ]){
                if(ind[s[i]-' '] != t[i])
                    return false;
            }
            else{
                ind[s[i] - ' '] = t[i];
            }
        }
        for(int i = 0; i < s.length(); i++){
            if(ind2[ t[i] - ' ' ]){
                if(ind2[t[i]-' '] != s[i])
                    return false;
            }
            else{
                ind2[t[i] - ' '] = s[i];
            }
        }
        return true;
    }
};