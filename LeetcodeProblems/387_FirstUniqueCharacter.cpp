#include <iostream>

using namespace std;

class Solution
{
public:
    int firstUniqChar(string s)
    {
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            char *ptr = &s[0], *ptr2 = &s[s.length() - 1];

            for (int j = 0; j < s.length() && count <= 0 && ptr != ptr2; j++)
            {
                if (ptr != &s[i] && *ptr == s[i])
                    count++;
                if (ptr2 != &s[i] && *ptr2 == s[i])
                    count++;
                ptr++ && ptr2--;
            }
            if (count == 0)
            {
                return i;
            }
            count = 0;
        }
        return -1;
    }
};