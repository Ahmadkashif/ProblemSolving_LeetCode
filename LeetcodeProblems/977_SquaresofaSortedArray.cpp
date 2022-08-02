class Solution {
public:
    void merge(vector<int>& arr, int s, int e, int mid){
        int i = s, j = mid+1;
        int leftArrSize = mid + 1 - s, rightArrSize = e - mid;
        
        vector<int> leftArr;
        vector<int> rightArr;
        
        for(int l = 0; l < leftArrSize; l++){
            leftArr.push_back(arr[l + s]);
        }
        
        for(int l = 0; l < rightArrSize; l++){
            rightArr.push_back(arr[l+ mid + 1]);
        }
        
        i = 0, j = 0;
        while(i < leftArrSize && j < rightArrSize){
            if(leftArr[i] < rightArr[j])
                arr[s] = leftArr[i++];
            else
                arr[s] = rightArr[j++];
            s++;
        }
        
        while(i < leftArrSize){
            arr[s] = leftArr[i++];
            s++;
        }
        while(j < rightArrSize){
            arr[s] = rightArr[j++];
            s++;
        }
        
    }
    void mergeSort(vector<int>& arr, int s, int e){
        
        if(s<e){
            int mid = (e + s)/2;
            
            mergeSort(arr, s, mid);
            mergeSort(arr, mid+1, e);
            
            merge(arr, s, e, mid);
        }
    }
    
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
            nums[i] = nums[i]*nums[i];
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};