#include <vector>
#include <map>
using namespace std;

string tournamentWinner(vector<vector<string>> competitions, vector<int> results)
{
    map<string, int> m;
    for (int i = 0; i < competitions.size(); i++)
    {
        if (results[i])
            m[competitions[i][0]] += 1;
        else
            m[competitions[i][1]] += 1;
    }
    vector<string> res(m.size());
    for (map<string, int>::iterator iter = m.begin(); i != m.end(); ++iter)
    {
        res[iter->second] = iter->first;
    }

    return res[res.size() - 1];
}
