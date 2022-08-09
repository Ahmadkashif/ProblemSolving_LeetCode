class Solution
{
public:
    bool isPerfectSquare(int t)
    {
        long long start = 1, mid;
        long long end = (t > 4 ? t / 2 : t);
        if (t < 3)
            return true;
        // int end = t;

        while (start < end)
        {
            mid = (end - start) / 2 + start; // 3

            if (mid * mid == t)
            {
                return true;
            }
            else if (mid * mid < t)
            {
                start = mid + 1; // 1 3 4
            }
            else if (mid * mid > t)
                end = mid; // 4
        }
        return false;
    }
};