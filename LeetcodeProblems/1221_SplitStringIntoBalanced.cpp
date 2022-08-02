#include <iostream>

using namespace std;

class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int count = 0, sum = (s[0] == 'R' ? -1 : 1);
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == 'R')
            {
                sum+=-1;
            }
            else if(s[i] == 'L'){
                sum+=1;
            }

            if(sum==0)
            count++;
        }
        return count;
    }
};