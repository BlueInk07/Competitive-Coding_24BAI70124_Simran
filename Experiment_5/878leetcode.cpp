class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        long long low = min(a, b);
        long long high = (long long)n * min(a, b);
        long long lcm = (long long)a * b / __gcd(a, b);
        const int MOD = 1e9 + 7;

        while (low < high) {
            long long mid = (low + high) / 2;
            long long cnt = mid / a + mid / b - mid / lcm;

            if (cnt >= n)
                high = mid;
            else
                low = mid + 1;
        }
        return low % MOD;
    }
};
