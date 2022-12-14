#include <vector>
#include <map>
using namespace std;

string tournamentWinner(vector<vector<string>> competitions, vector<int> results)
{
    map<string, int> m;
    
    string answer;

    int bestScore = 0;

    for (int i = 0; i < competitions.size(); i++)
    {
        if (results[i])
            m[competitions[i][0]] += 1;
        else
            m[competitions[i][1]] += 1;
    }

    for (map<string, int>::iterator iter = m.begin(); iter != m.end(); ++iter)
    {
        if (iter->second > bestScore)
        {
            bestScore = iter->second;
            answer = iter->first;
        }
    }

    return answer;
}
