#include <vector>
using namespace std;

int nonConstructibleChange(vector<int> coins)
{

    sort(coins.begin(), coins.end());
    int sum = 0;

    for (auto &itr : coins)
    {
        if (itr > (sum + 1))
            return sum + 1;
        else
            sum += itr;
    }
    return sum + 1;
}