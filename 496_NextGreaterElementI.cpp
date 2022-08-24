class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector <int> res(nums1.size(), -1);
        for(int i = 0; i < nums1.size(); i++){
            bool jFound = false;
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j])
                    jFound = true;
                if(jFound && nums2[j] > nums1[i]){
                    res[i] = nums2[j];
                    break;
                }
                    
            }
        }
        return res;
    }
};