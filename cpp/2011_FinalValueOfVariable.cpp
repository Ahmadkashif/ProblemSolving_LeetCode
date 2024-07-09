#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

// int finalValueAfterOperations(vector<string> &operations)
// {
//     int sum = 0;
//     for (int i = 0; i < operations.size(); i++)
//     {
//         if (operations[i] == "++X" || operations[i] == "X++")
//             sum++;
//         else
//             sum--;
//     }
//     return sum;
// }




















































int finalValueAfterOperations(vector<string> &operations)
{
    if (operations.size() == 0)
        return 0;
    else
    {
        if (operations.back() == "++X" || operations.back() == "X++")
        {
            operations.pop_back();
            return 1 + finalValueAfterOperations(operations);
        }
        else
        {
            operations.pop_back();
            return -1 + finalValueAfterOperations(operations);
        }
    }
}