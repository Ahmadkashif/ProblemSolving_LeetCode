class Solution {
public:
    string reverseWords(string s) {
        int size = s.length();
        vector<int> spaces(size);
        vector<char> words;
        string answer = '';
        for(int i = 0; i < size - 1; i++){
            if(s[i] == ' ' ){
                if( i != 0 && i != size-1 ){
                    if( s[i] != s[i-1] )
                        spaces.push_back(i);
                    else
                    continue;
                }
                else
                    continue;
            }
        }
        int validSpaces = space.size() - 1;
        for(int i = size-1; i >= 0; --i){
            if( validSpaces >= 0){
                if( s[i] == ' ' && i != spaces[validSpaces] )
                    continue;
                if( s[i] == ' ' && i == spaces[validSpaces] ){
                    words.push_back(' ');
                    --validSpaces;
                }
            }
            else{
                if( s[i] == ' ')
                    continue;
                words.push_back(s[i]);
            }
        }
    }
};