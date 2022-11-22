#include <iostream>
#include <vector>

using namespace std;

int numIdenticalPairs(vector<int> &nums)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] == nums[j] && i < j)
            count++;
        }

    return count;
}

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int mem[101] ={0};
        int sum=0;
        
        for(int i=0; i < nums.size(); i++){
            sum += mem[nums[i]];
            ++mem[nums[i]];
        }
        
        return sum;
    }
};

int main()
{
    return 0;
}