// class Solution {
// public:
//     int largestAltitude(vector<int>& gain) {
        
//         int max = 0, sum = 0;
        
//         for(int i = 0; i < gain.size(); i++){
//             sum+=gain[i];
            
//             if(max < sum)
//                 max = sum;
//         }
        
//         return max;
//     }
// };

class Solution {
public:
    int max = 0;
    int acc(vector<int>& gain, int index){
        
        if(index==0){
            if(max < gain[index])
                max = gain[index];
            return gain[index];
        }
            
        else{
            int sum = gain[index] + acc(gain, --index);
            if(max < sum)
                max = sum;
            return sum;
        }
         
        
    }
    int largestAltitude(vector<int>& gain) {
        acc( gain, gain.size()-1 );
        return max;
    }
};
