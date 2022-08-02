#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> operations;
    
    vector<int> minOperations(string boxes)
    {
        int count = 0;
        for (int i = 0; i < boxes.length(); i++)
        {
            count = 0;
            for (int j = 0; j < boxes.length(); j++)
            {
                if (j == i)
                    continue;
                if (s[j] == '1')
                {
                    count += abs(j - i);
                }
            }
            operations.push_back(count);
        }
        return operations;
    }
    // using pointers
    vector<int> minOperations(string boxes)
    {
        int count = 0;
        char *ptr1, *ptr2;
        for (int i = 0; i < boxes.length(); i++)
        {
            count = 0;
            ptr1 = &s[0];
            ptr2 = &s[boxes.length()-1];
            for (int j = 0; j < boxes.length() / 2; j++)
            {

                if(ptr1==ptr2 && *ptr1=='1'&& j!=i){
                    count += abs(j-i);
                }
                else if(*ptr1=='1' && j!=i){
                    count += abs(j-i);
                }
                else if(*ptr2=='1' && ((boxes.length()/2)-1 + j)!=i){
                    int l = (boxes.length()/2)-1 + j;
                    count += abs(l-i);
                }
            }
            operations.push_back(count);
        }
        return operations;
    }


























































    
};