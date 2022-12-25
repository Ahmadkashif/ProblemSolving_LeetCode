class BookMyShow {
    int n;
    int m;
    vector<array<long long, 2>> stree; // segment tree that tracks (max, sum) of each segment
public:
    void build(int i, int p, int q) {
        if (p == q) {
            stree[i] = {m, m};
            return;
        }
        int r = (p + q) / 2;
        stree[i] = {m, (long long)(q-p+1)*m};
        build(2*i+1, p, r);
        build(2*i+2, r+1, q);
    }

    vector<int> query_max(int i, int p, int q, int k, int maxRow) {
        if (p > maxRow)
            return {};
        if (stree[i][0] < k)
            return {};
        if (p == q)
            return {p, (int)(m - stree[i][0])};
        int r = (p + q) / 2;
        vector<int> ret = query_max(2*i+1, p, r, k, maxRow);
        if (ret.size())
            return ret;
        return query_max(2*i+2, r+1, q, k, maxRow);
    }

    void update_max(int i, int p, int q, int row, int k) {
        if (p > row || q < row)
            return;
        if (p == q) {
            stree[i][0] -= k;
            stree[i][1] -= k;
            // cout << p << " " << stree[i][0] << endl;
            return;
        }
        int r = (p + q) / 2;
        stree[i][1] -= k;
        update_max(2*i+1, p, r, row, k);
        update_max(2*i+2, r+1, q, row, k);
        stree[i][0] = max(stree[2*i+1][0], stree[2*i+2][0]);
    }

    long long query_sum(int i, int p, int q, int maxRow) {
        if (p > maxRow)
            return 0;
        if (q <= maxRow)
            return stree[i][1];
        int r = (p + q) / 2;
        return query_sum(2*i+1, p, r, maxRow) + query_sum(2*i+2, r+1, q, maxRow);
    }

    void update_sum(int i, int p, int q, int k, int maxRow) {
        if (p > maxRow)
            return;
        if (p == q) {
            stree[i][0] -= k;
            stree[i][1] -= k;
            // cout << p << " " << stree[i][0] << endl;
            return;
        }
        int r = (p + q) / 2;
        stree[i][1] -= k;
        if (r+1 > maxRow || stree[2*i+1][1] >= k) {
            update_sum(2*i+1, p, r, k, maxRow);
        } else {
            k -= stree[2*i+1][1];
            update_sum(2*i+1, p, r, stree[2*i+1][1], maxRow);
            // Be aware: stree[2*i+1][1] updates while updating the left tree
            update_sum(2*i+2, r+1, q, k, maxRow);
        }
        stree[i][0] = max(stree[2*i+1][0], stree[2*i+2][0]);
    }


    BookMyShow(int n_in, int m_in) {
        n = n_in;
        m = m_in;

        int sz = 1;
        while (sz < n*2)
            sz <<= 1;
        stree.resize(sz);

        build(0, 0, n-1);
    }

    vector<int> gather(int k, int maxRow) {
        // cout << "gather " << k << " " << maxRow << endl;
        vector<int> ret = query_max(0, 0, n-1, k, maxRow);
        if (ret.size())
            update_max(0, 0, n-1, ret[0], k);
        return ret;
    }

    bool scatter(int k, int maxRow) {
        // cout << "scatter " << k << " " << maxRow << endl;
        long long cnt = query_sum(0, 0, n-1, maxRow);
        bool ret = cnt >= k;
        if (ret)
            update_sum(0, 0, n-1, k, maxRow);
        return ret;
    }
};