class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int s = 0, e = nums.size()-1 , mid;
        
        while( s < e){
            mid = (e - s)/ 2 + s;
            // if(nums[s] > nums[mid] && nums[mid] < nums[e])
            //     return nums[mid];
            if(nums[s] > nums[mid] ){
                e = mid;
            }
            else if(nums[mid] > nums[e]){
                s = mid + 1;
            }
            else
                e = mid - 1;
        }
        return nums[s];
    }
};