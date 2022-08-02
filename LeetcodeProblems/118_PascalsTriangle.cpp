#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> Tri;
        int numRowIndex = 0;
        int start, end;

        if (numRows == 1)
        {
            Tri = {{1}};
            return Tri;
        }
        else if (numRows == 2)
        {
            Tri = {{1}, {1, 1}};
            return Tri;
        }
        else if (numRows > 2)
        {
            Tri = {{1}, {1, 1}};
            numRows -= 2;
            numRowIndex = 2;
            while (numRows > 0)
            {
                // numRowIndex++;
                Tri.push_back({});
                for (int i = 0; i <= numRowIndex; i++)
                {
                    if (i == 0 || i == numRowIndex)
                        Tri[numRowIndex].push_back(1);
                    else
                        Tri[numRowIndex].push_back(-1);
                }

                start = 0, end = 0;
                for (int i = 0; i < Tri[numRowIndex].size(); i++)
                {
                    if (Tri[numRowIndex][i] == 1)
                        continue;
                    else
                    {
                        end = start + 1;
                        Tri[numRowIndex][i] = Tri[numRowIndex - 1][start] + Tri[numRowIndex - 1][end];
                        start++;
                    }
                }
                numRows--;
                numRowIndex++;
            }
        }
        return Tri;
    }
};