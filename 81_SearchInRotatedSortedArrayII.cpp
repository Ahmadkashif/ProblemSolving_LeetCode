class Solution {
public:
    int getPhysicalIndex(vector<int>& nums, int Ofst, int vrtI){
        if(vrtI - Ofst < 0 )
            return nums.size() - abs(vrtI - Ofst);
        else if( vrtI - Ofst > nums.size()-1 )
            return vrtI - Ofst;
        return 0;
    }
    
    bool search(vector<int>& nums, int target) {
        int Ofst = 0;
        bool ans = false;
        for(int i = 1; i < snums.size(); i++){
            if(nums[i] - nums[i-1] <= 0)
                Ofst = i;
        }
        int s = getPhysicalIndex(nums, Ofst, k);
        int e = getPhysicalIndex(nums, Ofst, Ofst-1);
        int mid;
        while( s < e){
            mid = getPhysicalIndex(nums, Ofst, ( e - s)/ 2 + s );
            
            if(nums[ getPhysicalIndex(nums, Ofst, mid) ] == target)
                ans = true;
            else if(nums[ getPhysicalIndex(nums, Ofst, mid) ] < target)
                s = mid + 1;
            else
                e = mid - 1;
        }
        return ans;
    }
};