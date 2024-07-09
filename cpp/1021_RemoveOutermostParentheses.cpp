class Solution {
public:
    string removeOuterParentheses(string S) {
    int st=0;
    string ans;
    for(auto a:S)
    {
        if(a=='(')
        {
            if(st>0)
            {
                ans+='(';
            }
            st++;
        }
        else
        {
            if(st>1)
            {
                ans+=')';
            }
            st--;
        }
    }
    return ans;
}
};