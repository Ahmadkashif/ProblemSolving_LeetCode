class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0; // 0 1 2 3
        // move all the nonzero elements advance
        for (int i = 0; i < nums.size(); i++) { // 1 2 3 4
            if (nums[i] != 0) {
                nums[j++] = nums[i];
            }
        }
        for (;j < nums.size(); j++) {
            nums[j] = 0;
        }
    }
};
// [0 0 1]
// 0 1 0 3 12
// 1 1 0 3 12
// 1 3 0 3 12
// 1 3 12 3 12