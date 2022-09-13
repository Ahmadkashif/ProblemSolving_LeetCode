#include <vector>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array)
{
    vector<int> res;
    for (int n : array)
        res.push_back(n * n);
    sort(res.begin(), res.end());
    return res;
}
