class Solution {
public:
    char getChar(vector<char>& s){
        if( s.size() == 1){
            char c = s.front();
            return c;
        }
        else{
            char c = s[0];
            s.erase(s.begin());
            getChar(s);
            s.push_back(c);
            return c;
        }
    }
    void reverseString(vector<char>& s) {
        getChar(s);
    }
};