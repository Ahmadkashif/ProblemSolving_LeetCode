#include <stack>
class Solution {
public:
    bool isValid(string s) {
        stack<int> stack1, stack2, stack3;

        for ( int i = 0; i < s.length(); i++)
        {
            if ( (s[i] == ')' && stack1.empty()) || (s[i] == ']' && stack2.empty()) || (s[i] == '}' && stack3.empty()) )
            return false;

            if( s[i] == '(' )
                stack1.push(i);
            if( s[i] == ')' )
                stack1.pop();
            if( s[i] == '[' )
                stack2.push(i);
            if( s[i] == ']' )
                stack2.pop();
            if( s[i] == '{' )
                stack3.push(i);
            if( s[i] == '}' )
                stack3.pop();
        }

        return stack1.empty() && stack2.empty() && stack3.empty();

    }
};