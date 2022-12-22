// ----------- Solution 1 ------------ 
// Passed
#include <stack>

using namespace std;

bool isValidSubsequence(vector<int> arr, vector<int> seq)
{

    stack<int> stack;
    for (int i = seq.size() - 1; i >= 0; i--)
        stack.push(seq[i]);

    for (int n : arr)
    {
        if (stack.top() == n)
        {
            stack.pop();
            if (stack.empty())
                return true;
        }
    }
    return false;
}

