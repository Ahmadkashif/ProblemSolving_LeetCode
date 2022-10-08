class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int maxRange = arr.back() + k;
        vector<int> res;
        int iter = 0;
        for(int i = 1; i <= maxRange; i++){
            if(iter < arr.size() && arr[iter] == i)
                iter++;
            else
                res.push_back(i);
        }
        return res[k-1];
    }
};