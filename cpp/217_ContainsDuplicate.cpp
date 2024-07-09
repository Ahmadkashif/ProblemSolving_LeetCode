#include <iostream>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i =0 ;i < nums.size();i++){
            for(int j = i+1; j<nums.size();j++){
                if(nums[i]==nums[j])
                return true;
            }
        }
        return false;
    }
    // using sorting 
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i =0 ;i < nums.size();i++){
            for(int j = i+1; j<nums.size();j++){
                if(nums[i] < nums[j])
                break;
                else if(nums[i]==nums[j])
                return true;
            }
        }
        return false;

        
    }
    bool containsDuplicate(vector<int>& nums) {
        
    }
};