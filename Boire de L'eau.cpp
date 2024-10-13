#include <bits/stdc++.h>
using namespace std;

bool good(const vector<int>& bk, int m, int k, int hr) {
    int mc = hr * k;  
    int p = 1, cs = 0;

    for (int wt : bk) {
        if (wt > mc) return false; 

        if (cs + wt > mc) {
            p++; 
            cs = wt;
            if (p > m) return false; 
        } 
        else cs += wt;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> bkt(n);
    for (int i = 0; i < n; ++i) cin >> bkt[i];

    int l = 0, h = accumulate(bkt.begin(), bkt.end(), 0LL), ans = h;

    while (l <= h) {
        int mid = (l + h) / 2;
        
        if (good(bkt, m, k, mid)) ans = mid, h = mid - 1;
        else l = mid + 1;
    }

    cout << ans << endl;
    return 0;
}
