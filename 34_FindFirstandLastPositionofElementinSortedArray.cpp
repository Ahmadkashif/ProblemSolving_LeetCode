class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
        vector<int> res(2, -1);
        int x = 0;
        for(int i = 0; i < nums.size(); i++)
            if( nums[i] == t){
                res[x++] = i;
                break;
            }
                
        
        for(int i = nums.size()-1; i >= 0; i--)
            if(nums[i] == t)
            {
                res[x] = i;
                break;
            }
        return res;
    }
};

/*
acceptance criteria:
    find 2 things:
        1. smallest index where nums[index] == t
                smallest index is the first time nums[s] == t
        2. largest index where nums[index] == t
                largest index is the first time nums[e] == t
*/