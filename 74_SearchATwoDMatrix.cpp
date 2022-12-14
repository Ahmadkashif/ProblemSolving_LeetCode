#include <iostream>
#include <vector>

using namespace std;

class Solution {

public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int targetIndex=0;
        
        for (int i = 0; i < matrix.size() && target >= matrix[i][0]; i++)
        {
            targetIndex = i;
        }
        for (int i = 0; i < matrix[targetIndex].size() && target >= matrix[targetIndex][i]; i++)
        {
            if(matrix[targetIndex][i] == target)
            return true;
        }
        
        return false;
    }
};