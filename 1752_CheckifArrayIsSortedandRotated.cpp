class Solution {
public:
    int count = 0;
    int getNum(vector<int>& n,int i){
        if( i == n.size() - 1)
            return n[i];
        else{
            count = (getNum(n,i + 1) - n[i] >= 0 ? count : count + 1);
            return n[i];
        }
            
    }
    bool check(vector<int>& nums) {
        getNum(nums, 0);
        if (count == 0)
            return true;
        else 
            return count == 1 && nums[0] >= nums[nums.size()-1];
    }
};