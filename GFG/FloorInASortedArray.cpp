class Solution
{
public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x)
    {

        sort(v.begin(), v.end());

        int start = 0, end = v.size() - 1, mid = 0, ans = 0;

        if (v[0] > x)
            return -1;

        while (start <= end)
        {
            mid = (end - start) / 2 + start;

            if (v[mid] == x)
                return mid;
            else if (v[mid] < x)
            {
                start = mid + 1;
            }
            else
                end = mid - 1;
        }
        return start - 1;
    }
};
