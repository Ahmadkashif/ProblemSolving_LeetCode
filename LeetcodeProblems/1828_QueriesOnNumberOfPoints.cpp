#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> countPoints(vector<vector<int>> &points, vector<vector<int>> &queries)
{
    vector<int> answers;
    for (auto Q : queries)
    {
        int count = 0;
        for (auto P : points)
        {
            if (Q[2] >= sqrt(pow(P[0] - Q[0] , 2) + pow(P[1] - Q[1] , 2)))
                count++;
        }
        answers.push_back(count);
    }
    return answers;
}

int main()
{
}