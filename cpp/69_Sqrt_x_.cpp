// class Solution {
// public:
//     long getSqr(long n, int x){
//         if( (n*n) == x)
//             return n;
//         if( (n*n) > x)
//             return n-1;

//         return getSqr(++n,x);
//     }
//     int mySqrt(int x) {
//         return getSqr(1,x);
//     }
// }


#include <numeric>

class Solution
{
public:
    int mySqrt(int x)
    {
        if (x < 2)
            return x;
        
        long long s = 0, e = x, mid;

        while (s <= e)
        {
            mid = (e - s) / 2 + s;
            if(mid * mid == x){
                return mid;
            }
            else if(mid*mid<x){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return ( s == 0 ? s : s - 1);
    }
};