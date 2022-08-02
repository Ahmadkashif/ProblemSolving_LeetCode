class Solution
{
public:
    //     int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
    //         int maxValue = 0;
    //         int maxIndex = 0;
    //         int count = 0;

    //         while(truckSize){
    //             for(int i = 0; i < boxTypes.size(); i++){

    //                 if(maxValue < boxTypes [i][1])
    //                 {
    //                     maxValue = boxTypes[i][1];
    //                     maxIndex = i;
    //                 }
    //             }

    //             maxValue = 0;

    //             if( truckSize > boxTypes[maxIndex][0]  ){
    //                 truckSize = truckSize - boxTypes[maxIndex][0];
    //                 count += boxTypes[maxIndex][0] * boxTypes[maxIndex][1];
    //             }
    //             else{
    //                 count += truckSize * boxTypes[maxIndex][1];
    //                 break;
    //             }

    //             boxTypes[maxIndex][1] =-1;
    //         }
    //         return count;
    //     }
    static bool myfunction(vector<int> &a, vector<int> &b)
    {
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
    {
        // custom sort (in increasing order of numberOfUnitsPerBox as we have to return  maximum total number of units )
        sort(boxTypes.begin(), boxTypes.end(), myfunction);
        // greedily pick boxes till capacity is full
        int ans = 0;
        for (auto box : boxTypes)
        {
            int x = min(box[0], truckSize); // choose minimum boxes from available boxes and capacity left
            ans += (x * box[1]);            // adding units in ans
            truckSize -= x;                 // reduce the capacity
            if (!truckSize)
                break; // capacity full
        }
        return ans;
    }
};