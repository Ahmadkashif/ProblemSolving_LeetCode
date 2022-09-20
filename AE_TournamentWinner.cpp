#include <vector>
#include <map>
using namespace std;

string tournamentWinner(vector<vector<string>> competitions, vector<int> results)
{
    map<string, int> m;
    for (int i = 0; i < competitions.size(); i++)
    {
        if (results[i])
            m[arr[0]] += 1;
        else
            m[arr[1]] += 1;
    }
    vector<string> res(m.size());
    for (map<string, int> iter i = m.begin(); i < m.end(); ++iter)
    {
        res[iter->second] = iter->first;
    }

    return res[res.size() - 1];
}
