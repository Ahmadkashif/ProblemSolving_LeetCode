class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> res(n);
        
        int n1 = n;
        
        for(int i = 0 ; i < n/2 ; i++){
            
            res[i] = -1 * n1/2;
            
            res[n-i-1] = n1/2;
            
            n1 = n1-2;
        }
        
        return res;
    }
    
};