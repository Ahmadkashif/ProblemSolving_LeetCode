class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool peakFound = false;
        bool incline = false;

        for(int i = 1; i < arr.size(); i++){

            if(arr[i-1] - arr[i] == 0)
            break;

            else if(arr[i-1] - arr[i] < 0)
            incline = true;

            else if(incline && arr[i-1] - arr[i+1] > 0)
            peakFound = true;

            else
            peakFound = false;
        }
        return peakFound;
    }
};