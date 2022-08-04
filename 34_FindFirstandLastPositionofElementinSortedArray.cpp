class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
        vector<int> res (2, -1);
        int s = 0 , e = nums.size() -1, mid;
        
        while(s < e){
            mid = (e - s)/2 + s;
            
            if(nums[mid] == t){
                if(nums[mid-1] < t){
                    res[0] = mid -1;
                    
                }
                break;
            }
            else if(nums[mid] < t){
                s = mid + 1;
            }
            else
                e = mid - 1;
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