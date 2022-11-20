#include <iostream>
#include <vector>

using namespace std;

int ptr = 0;
vector<bool> results;

int getMax(vector<int> &v)
{
        int max = 0;
        for (int i = 0; i < v.size(); i++)
                if (max < v[i])
                        max = v[i];

        return max;
}
vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{

        if (!(ptr < candies.size()))
                return results;
        if ((extraCandies + candies[ptr++]) < getMax(candies))
                results.push_back(false);

        else
                results.push_back(true);

        kidsWithCandies(candies, extraCandies);
        return results;
}
int main()
{
}