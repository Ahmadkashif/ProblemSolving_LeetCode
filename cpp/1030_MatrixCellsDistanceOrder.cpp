class Solution
{
public:
    void merge2D(vector<vector<int>> &main, vector<int> &w, int s, int mid, int e)
    {

        int leftSize = mid - s + 1;
        int rightSize = e - mid;

        vector<int> left1DArr, right1DArr;
        vector<vector<int>> left2DArr, right2DArr;

        for (int i = 0; i < leftSize; i++)
        {
            // vector<int>temp;
            left1DArr.push_back(w[i + s]);
            left2DArr.push_back(main[i + s]);
        }

        for (int i = 0; i < rightSize; i++)
        {
            // vector<int>temp;
            right1DArr.push_back(w[i + mid + 1]);
            right2DArr.push_back(main[i + mid + 1]);
        }
        int i = 0, j = 0;
        while (i < leftSize && j < rightSize)
        {
            if (left1DArr[i] < right1DArr[j])
            {
                w[s] = left1DArr[i];
                // main[s++] = left2DArr[i++];
                s++;
                i++;
            }
            else
            {
                w[s] = right1DArr[j];
                // main[s++] = right2DArr[j++];
                s++;
                j++;
            }
        }

        while (i < leftSize)
        {
            w[s] = left1DArr[i];
            // main[s++] = left2DArr[i++];
            s++;
            i++;
        }
        while (j < rightSize)
        {
            w[s] = right1DArr[j];
            // main[s++] = right2DArr[j++];
            s++;
            j++;
        }
    }

    void mergeSort2D(vector<vector<int>> &main, vector<int> &w, int s, int e)
    {
        if (s < e)
        {

            int mid = (e + s) / 2;

            mergeSort2D(main, w, s, mid);
            mergeSort2D(main, w, mid + 1, e);

            merge2D(main, w, s, mid, e);
        }
    }

    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0)
    {
        vector<vector<int>> res = {{r0, c0}};
        auto max_d = max({r0 + c0, c0 + R - r0, r0 + C - c0, R - r0 + C - c0});
        for (auto d = 1; d <= max_d; ++d)
            for (int x = d; x >= -d; --x)
            {
                auto r1 = r0 + x, c1_a = c0 + d - abs(x), c1_b = c0 + abs(x) - d;
                if (r1 >= 0 && r1 < R)
                {
                    if (c1_a >= 0 && c1_a < C)
                        res.push_back({r1, c1_a});
                    if (c1_a != c1_b && c1_b >= 0 && c1_b < C)
                        res.push_back({r1, c1_b});
                }
            }
        return res;
    }
};
// [[1,1],[1,0],[0,1],[0,0],[2,3,3,4]]