class Solution {
public:
    int bulbSwitch(int n) {
        int count = 0;
        for(long long i = 1; i <= n; i++)
        {
            if(i * i <= n)
                count++;
        }

        return count;

    }
};