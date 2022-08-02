class Solution {
public:
    int calSum(vector<int> & arr, int start, int end){
        if(start==end)
            return arr[start];
        else 
            return arr[start] + calSum(arr, ++start, end);
    }
    int sumOddLengthSubarrays(vector<int>& arr) {
        int wS = ( arr.size() % 2 == 0 ? arr.size()-1 : arr.size());
        int start = 0, end = 0, sum = 0;
        
        while( wS > 0){
            start = 0;
            end = wS-1;
            
            while( end < arr.size() ){
                sum += calSum(arr, start, end);
                start ++;
                end++;
            }
            wS -= 2;
        }
        return sum;
    }
};
