class Solution
{
public:
    /*
        1. go through every row
        2. find the index of 1st negative number using binary search in every row
        3. subtract the index from row.size() to get total number of negative numbers
        4. if all numbers are positive then lo will reach rightmost position & row[lo] will be +ve as well
        5. Time Complexity : O(m log n), where m = rows, n = columns
    */
    int CountNeg(vector<int> row, int n)
    {
        int lo = 0, hi = n - 1, mid;

        while (lo < hi)
        {
            mid = lo + (hi - lo) / 2;
            if (row[mid] >= 0)
                lo = mid + 1;
            else
                hi = mid;
        }
        if (row[lo] < 0)
            return (n - lo);
        return 0;
    }

    int countNegatives(vector<vector<int>> &grid)
    {
        if (grid.empty() || grid[0].empty())
            return 0;

        int n = grid[0].size(), count = 0;
        for (auto row : grid)
            count += CountNeg(row, n);
        return count;
    }
};

//  [-1,-1,-2,-3]]