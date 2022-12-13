class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
        vector<int> res(2,-1);
        int lower = 0, higher = 0;
        
        if( nums.size() != 0 ){
            
            int s = 0, e = nums.size()-1, mid = 0;

            while( s <= e){

                mid = (e-s)/2 + s;

                if(nums[mid]==t){
                    res[0] = mid;
                    e = mid - 1;
                }
                else if(nums[mid] > t )
                    e = mid - 1;
                else
                    s = mid + 1;
            }

            s = 0, e = nums.size()-1, mid = 0;
            while(s <= e ){
                mid = (e-s)/2 + s;
                if(nums[mid]==t){
                    res[1] = mid;
                    s = mid + 1;
                }
                else if(nums[mid] > t )
                    e = mid - 1;
                else
                    s = mid + 1;
            }
        }
        return res;
    }
};