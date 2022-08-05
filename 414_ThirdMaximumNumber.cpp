class Solution {
public:
    void swap(vector<int>& nums, int a, int b){
        nums[a] = nums[a] + nums[b];
        nums[b] = nums[a] - nums[b];
        nums[a] = nums[a] - nums[b];
    }
    int thirdMax(vector<int>& nums) {
        
        vector<int> result;
        
        int sIndex = 1, maxI = 0;
        
        for(int i = 0; i < nums.size(); i++){
            maxI = 0;
            for(int j = 0; j < nums.size() - sIndex; j++){
                
                if(nums[j] > nums[nums.size() - sIndex])
                {
                    swap(nums, nums.size()-sIndex, j);
                }
            }
            
            if(result.size()==0){
                // if result is empty
                result.push_back(nums[nums.size()-sIndex]);

            }
            else{
                if(result[result.size()-1]>nums[nums.size()-sIndex])
                    result.push_back(nums[nums.size()-sIndex]);
            }
            
            sIndex++;
            
            if(result.size()==3)
                break;
        }
        if(result.size() < 3)
            return result[0];
        
        return result[2];
    }
};