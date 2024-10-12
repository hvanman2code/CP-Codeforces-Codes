#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i].f;
            a[i].s = i + 1;
        }
        sort(a.begin(), a.end());
        vector<long long> p(n);
        p[0] = a[0].f;
        for (int i = 1; i < n; ++i) {
            p[i] = p[i - 1] + a[i].f;
        }
        int w = 0;
        for (int i = n - 1; i > 0; --i) {
            if (p[i - 1] < a[i].f) {
                w = i;
                break;
            }
        }
        cout << n - w << "\n";
        for (int i = w; i < n; ++i) {
            cout << a[i].s << " ";
        }
        cout << "\n";
    }
    return 0;
}
