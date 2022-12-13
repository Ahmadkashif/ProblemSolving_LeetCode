#include <vector>
using namespace std;

// Solution 1
vector<int> sortedSquaredArray(vector<int> array)
{
    vector<int> res;
    for (int n : array)
        res.push_back(n * n);
    sort(res.begin(), res.end());
    return res;
}

// Solution 2
#include <vector>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array)
{
    int n = array.size() - 1;
    vector<int> res(array.size());
    int *lPtr, *rPtr;
    lPtr = &array[0];
    rPtr = &array[array.size() - 1];

    for (int i = 0; i < array.size(); i++)
    {
        int x = *lPtr, y = *rPtr;
        if (x * x > y * y)
        {
            res[n - i] = x * x;
            lPtr++;
        }
        else if (x * x < y * y)
        {
            res[n - i] = y * y;
            rPtr--;
        }
        else
        {
            res[n - i] = x * x;
            lPtr++;
        }
    }

    return res;
}
