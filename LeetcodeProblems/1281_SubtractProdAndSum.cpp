class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = n > 1 ? 1 : n;
        int sum = 0;
        int r = 1;
        while( r < n/10 ){
            r*=10;
        }
        while( r<1){
            prod *= n/r;
            sum += n/r;
            n -= (n/r)*r;
            r/=10;
        }        
        return prod - sum;
    }
};