#include <cmath>
class Solution {
public:
    
    vector<int> plusOne(vector<int>& d) {
        
        long num = 0;
        long r = 0;
        vector<int> res;
        
        for(int i = d.size()-1; i >= 0; i--){
            num += d[i] * pow(10,r);
            r++;
        }
        num++;
        if(d[d.size()-1]!=9)
            r/=10;
        
        while(num){
            res.insert(res.begin(),num%10);
            num/=10;
        }
        
        return res;
    }
};


class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        bool carry = true;
        
        for(int i=digits.size()-1; i >= 0 && carry; i--) {
            carry = (++digits[i]%=10) == 0;
        }

        if(carry) {
            digits.insert(digits.begin(), 1);
        }
    
        return digits;
    }
};