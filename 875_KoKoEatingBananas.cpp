class Solution
{
public:
    bool validate(vector<int> &piles, int h, long long k)
    {

        int pilesFinished = 0;
        long long hoursTaken = 0;
        // count number of hours per pile with given k
        for (int b : piles)
        {
            hoursTaken += b / k;
            if (b % k)
                hoursTaken++;
        }

        if (hoursTaken <= h)
            return true;

        return false;
    }
    int minEatingSpeed(vector<int> &piles, int h)
    {

        sort(piles.begin(), piles.end());
        long long max = piles[piles.size() - 1];
        long long low = 1, mid;
        long ans = 0;

        while (low <= max)
        {
            mid = (max - low) / 2 + low;

            if (validate(piles, h, mid))
            {

                max = mid - 1;
            }
            else
                low = mid + 1;
        }

        return low;
    }
};