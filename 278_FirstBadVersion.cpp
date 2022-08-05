// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int end = n, start = 1, curr = 0, ans = curr - 1;
        if(n == 1) return 1;
        if (n <= 3)
            for(int i = 0; i <= n; i++){
                if(isBadVersion(i)){
                    if(i>=1)
                        return i;
                    return i-1;
                }
                    
            }
        while(true){
            
            curr = ( end - start ) / 2 + start;
            
            if(isBadVersion(curr)){
                
                if(!isBadVersion(curr-1)){
                    if(curr<=1) return 1;
                    ans = curr;
                    break;
                }
                    
                end = curr;
            }
            else{
                start = curr;
                if(isBadVersion(start+1))
                    return start+1;
            }
            
        }
        return ans;
    }
};