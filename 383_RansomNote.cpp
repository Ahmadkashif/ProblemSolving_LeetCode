class Solution {
public:
    bool canConstruct(string ran, string mag) {
        map<char,int> m;
        for(char c: mag)
            m[c]++;
        
        for(char c: ran)
        {
            if(m[c])
                m[c]--;
            else
                return false;
        }
        return true;
    }
};