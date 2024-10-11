#include<bits/stdc++.h>
using namespace std;

long long n, k;
vector<long long> v;

bool good(long long a) {
    long long kc = k; 
    for (int i = n / 2; i < n; i++) {
        if (a > v[i]) {
            kc-= a - v[i];
            if (kc < 0) return false; 
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    cin >> n >> k;
    v.resize(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
   
    sort(v.begin(), v.end());
    
   
    long long l = v[n / 2];
    long long r = v[n / 2] + k;
    
    while (l < r) {
        long long mid = (l + r + 1) / 2; 
        
        if (good(mid)) l = mid; 
        else r = mid - 1;
        
    }
    
    
    cout << l << endl;
    
    return 0;
}
