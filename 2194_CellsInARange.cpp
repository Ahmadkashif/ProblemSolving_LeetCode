#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<string> results;
    vector<string> cellsInRange(string s)
    {

        int colStart = (int)s[0];
        int colEnd = (int)s[3];
        int rowSTart = (int) '1';
        int rowEnd = (int) s[4];
        rowEnd++;
        
        for (int i = colStart; i < colEnd; i++)
        {
            for (int j = rowSTart; j < rowEnd; j++)
            {
                results.push_back((char)i+(char)j);
            }
            
        }
        return results;
    }
};