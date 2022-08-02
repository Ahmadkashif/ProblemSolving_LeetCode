#include <iostream>

using namespace std;

class Solution
{
public:
    int i;
    // string restoreString(string s, vector<int>& indices) {
    //     string newString;
    //     for(int i = 0 ; i < indices.size(); i++){
    //         newString += s[indices[i]];
    //     }
    //     return newString;
    // }
    int getNext(vector<int> &indices, int index = 0)
    {
        if (i != indices[index])
            getNext(indices, index++);

        i++;
        return index;
    }
    string restoreString(string s, vector<int> &indices)
    {
        if (!(i < indices.size()))
        {
            return s[getNext(indices)] + restoreString(s, indices);
        }
        return "";
    }
};