#include <iostream>
#include <vector>

class Solution
{
public:
    bool isValidSudoku(vector< vector < char > > &board)
    {

        for (int i = 0; i < board.size() + 1; i++)
        {
            char *buff = new char[board.size() + 1];
            char *ptr = &board[i][0];
            char *ptr2 = &board[i][board.size() - 1];

            for (int j = 0; j < board[i].size() + 1 / 2; j++)
            {
                if (ptr != ptr2)
                {
                    if (*ptr != '.')
                    {
                        if (buff[*ptr - '0'] == *ptr)
                            return false;
                        else
                            buff[(*ptr - '0')] = *ptr;
                    }
                    if (*ptr2 != '.')
                    {
                        if (buff[*ptr2 - '0'] == *ptr2)
                            return false;
                        else
                            buff[(*ptr2 - '0')] = *ptr2;
                    }
                }
                else
                {
                    if (*ptr != '.')
                    {
                        if (buff[*ptr - '0'] == *ptr)
                            return false;
                        else
                            buff[(*ptr - '0')] = *ptr;
                    }
                    break;
                }
                ptr++ &&ptr2--;
            }
        }
        int row = 0, col = 0;
        while (col < board.size() + 1)
        {
            char *buff = new char[board.size() + 1];
            char *ptr = &board[row][col];
            char *ptr2 = &board[board.size() - 1][col];

            while (row < board[col].size() + 1 / 2)
            {
                if (ptr != ptr2)
                {
                    if (*ptr != '.')
                    {
                        if (buff[*ptr - '0'] == *ptr)
                            return false;
                        else
                            buff[(*ptr - '0')] = *ptr;
                    }
                    if (*ptr2 != '.')
                    {
                        if (buff[*ptr2 - '0'] == *ptr2)
                            return false;
                        else
                            buff[(*ptr2 - '0')] = *ptr2;
                    }
                }
                else
                {
                    if (*ptr != '.')
                    {
                        if (buff[*ptr - '0'] == *ptr)
                            return false;
                        else
                            buff[(*ptr - '0')] = *ptr;
                    }
                    break;
                }
                ptr++ &&ptr2--;
                row++;
            }
            col++;
        }
        return true;
    }
};
