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

vector<bool> kidsWithCandies(vector<int>& c, int extraCandies) {
        
        vector<bool> res(c.size());
        bool found = true;
            
        for(int i = 0; i < c.size(); i++){
            
            int max = c[i] + extraCandies;
            
            for (int j = 0; j < c.size();j++)
            {
                if (i == j)
                    continue;
                
                
                if(max < c[j]){
                    found = false;
                    break;
                }
            }
            res[i]=found;
            found = true;
        }
        
        return res;
    }

int main()
{
}