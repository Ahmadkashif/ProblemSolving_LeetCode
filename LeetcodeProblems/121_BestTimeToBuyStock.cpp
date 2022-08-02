#include <iostream>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxProfit= 0;
        for (int i = 0; i < prices.size(); i++)
        {
            for (int j = i+1 ; j < prices.size(); j++)
            {
                if(maxProfit < prices[j]-prices[i])
                maxProfit = abs(prices[i]-prices[j]);
            }
        
        }

        return maxProfit;



        
    }
};