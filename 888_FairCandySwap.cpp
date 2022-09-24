class Solution
{
public:
    vector<int> fairCandySwap(vector<int> &A, vector<int> &B)
    {
        int sumA = accumulate(A.begin(), A.end(), 0), sumB = accumulate(B.begin(), B.end(), 0);
        int tmp = (sumB - sumA) / 2;
        set<int> stA(A.begin(), A.end()), stB(B.begin(), B.end());
        for (auto &x : stA)
            if (stB.find(x + tmp) != stB.end())
                return {x, x + tmp};
        return {0, 0};
    }
};