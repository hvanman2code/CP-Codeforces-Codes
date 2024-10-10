#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    vector<long long> c(n), d(n);
    
    c[0] = a[0];
    d[0] = b[0];
    
    for (int i = 1; i < n; i++) {
        c[i] = max(c[i-1], d[i-1] + a[i]);
        d[i] = max(d[i-1], c[i-1] + b[i]);
    }
    
    cout << max(c[n-1], d[n-1]) << endl;

    return 0;
}
