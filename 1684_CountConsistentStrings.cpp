class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0, sentinel = 0;
        int allowedArray [26] = {};
        for(char c: allowed){
            allowedArray[c-'a'] = 1;
        }
        for(string w: words){
            for(char cWord: w){
                if(allowedArray[cWord-'a'] == 1){
                    sentinel++;
                }
                else
                    sentinel--;
            }
            if(sentinel == w.length())
                count++;
            
            sentinel = 0;
        }
        return count;
    }
};