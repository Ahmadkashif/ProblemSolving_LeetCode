#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
    {
        vector<vector<int>> result;
        if (r * c != mat.size() * mat[0].size())
            return mat;

        int row = 0, col = 0;
        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[i].size(); j++)
            {
                if (col == c -1)
                {
                    col = 0;
                    row++;
                }

                result[row].push_back(mat[i][j]);
                col++;
            }
        }
        return result;
    }
};