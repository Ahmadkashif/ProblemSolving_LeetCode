class Solution {
public:
    long getSqr(long n, int x){
        if( (n*n) == x)
            return n;
        if( (n*n) > x)
            return n-1;
        
        return getSqr(++n,x);
    }
    int mySqrt(int x) {
        return getSqr(1,x);
    }
}