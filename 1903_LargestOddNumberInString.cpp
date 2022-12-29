class Solution {
public:
    string largestOddNumber(string num) {
        int s = 0, e = num.length() - 1;
        int maxInt;
        string ans;

        for(int i = num.length() - 1; i >= 0 ; --i){
            if( ( num[i]-'0' ) % 2 != 0 ) break;
            e--;
        }

        for(int i = s; i <= e; i++)
            ans += num[i];

        return ans;
    }
};