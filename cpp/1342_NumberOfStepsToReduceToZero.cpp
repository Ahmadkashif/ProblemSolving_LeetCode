#include <iostream>

using namespace std;

class Solution
{
public:
    int numberOfSteps(int num)
    {
        int count = 0;

        while (num != 0)
        {
            if (num % 2 == 1)
                num--;

            else
            {
                num /= 2;
            }
            count++;
        }
        return count;
    }
    
    int numberOfSteps(int num)
    {
        if (num <= 0)
            return 0;
        else if (num % 2 == 1)
            return 1 + numberOfSteps(num - 1);
        else
            return 1 + numberOfSteps(num / 2);
    }
};