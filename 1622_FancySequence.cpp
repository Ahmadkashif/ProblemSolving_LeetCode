class Fancy {
public:
    vector<array<int, 3>> num;
int r_mul = 1, r_inc = 0, mod = 1000000007;
int modPow(int n, int p) {
    if (p == 1)
        return n;
    long p2 = modPow(n, p / 2);
    return (p2 * p2 % mod * (p % 2 ? n : 1)) % mod;
}
void append(int val) { num.push_back({val, r_mul, r_inc}); }
void addAll(int inc) { r_inc += inc; }
void multAll(int m) {
    r_mul = (long)r_mul * m % mod;
    r_inc = (long)r_inc * m % mod;
}
int getIndex(int idx) {
    if (idx >= num.size())
        return -1;
    auto &[val, mul, inc] = num[idx];
    auto ratio = (long)r_mul * modPow(mul, mod - 2) % mod;
    return (ratio * (mod + val - inc) + r_inc) % mod;
}
};

/**
 * Your Fancy object will be instantiated and called as such:
 * Fancy* obj = new Fancy();
 * obj->append(val);
 * obj->addAll(inc);
 * obj->multAll(m);
 * int param_4 = obj->getIndex(idx);
 */