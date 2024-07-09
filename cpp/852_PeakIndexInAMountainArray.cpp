class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0,           // 0 2
        right = arr.size() - 1, // 3
        mid;                    // 1
        while(left < right){
            mid = (right - left)/ 2 + left;
            if(mid && mid < arr.size() && arr[mid-1] < arr[mid] && arr[mid+1] < arr[mid])
                return mid;
            else if (arr[mid] > arr[mid+1])
                right = mid - 1;
            else
                left = mid + 1;
        
        }
        return left ;
    }
};
