#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long power(long long x, long long y) {
    long long res = 1;
    x = x % MOD;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % MOD;
        y = y >> 1;
        x = (x * x) % MOD;
    }
    return res;
}

long long modInverse(long long n) {
    return power(n, MOD - 2);
}

long long nCr(long long n, long long r) {
    if (n < r)
        return 0;
    if (r == 0)
        return 1;
    long long fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % MOD;
    return (fac[n] * modInverse(fac[r]) % MOD * modInverse(fac[n - r]) % MOD) % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ones = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 1)
                ones++;
        }

        long long sum = 0;
        long long prefix[ones + 1];
        prefix[0] = 1;
        for (int i = 1; i <= ones; i++) {
            prefix[i] = (prefix[i - 1] * (ones - i + 1)) % MOD * modInverse(i) % MOD;
        }

        for (int i = k / 2 + 1; i <= min(ones, k); i++) {
            sum = (sum + prefix[i] * nCr(n - ones, k - i)) % MOD;
        }

        cout << sum << '\n';
    }

    return 0;
}