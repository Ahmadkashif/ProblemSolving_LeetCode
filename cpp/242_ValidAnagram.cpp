#include <vector>
class Solution {
public:
    bool isAnagram(string s, string t) {
        string sPrime, tPrime;
        vector<char> sArr;
        vector<char> tArr;
        for(char c: s){
            sArr.push_back(c);
        }
        for(char c: t){
            tArr.push_back(c);
        }
        sort(sArr.begin(),sArr.end());
        sort(tArr.begin(),tArr.end());
        return sArr == tArr;
    }
};