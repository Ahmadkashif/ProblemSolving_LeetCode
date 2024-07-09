#include <iostream>
#include <vector>

using namespace std;

int minInsertions(string s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' )
        count+=2;
        else
        count -= 1;
    }
    return count;
}
int main()
{
    return 0;
}