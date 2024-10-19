#include <bits/stdc++.h>

using namespace std;

#define vi   vector<int>
#define yes  cout<<"YES\n";
#define no  cout<<"NO\n";


const int N = 3e5 + 17;

char c[N];
int n, q, qri;
vi a(N),mini(N),maxi(N);

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {  
        cin >> n >> q;
        
        for (int i = 1; i <= n; i++) cin >> a[i]; 
        for (int i = 1; i <= n; i++) cin >> c[i]; 
        
        maxi[1] = a[1];
        mini[n] = a[n];
        
        for (int i = 2; i <= n; i++) maxi[i] = max(maxi[i - 1], a[i]);
        
        for (int i = n - 1; i >= 1; i--) mini[i] = min(mini[i + 1], a[i]);
        
        
        int cnt = 0; 
        for (int i = 1; i < n; i++) {
            if (c[i+1] == 'R' && c[i] == 'L') cnt += maxi[i] > mini[i + 1];              
        }
        
        while (q--) {
            cin >> qri;
                        
            if (qri > 1 && c[qri - 1] == 'L' && c[qri] == 'R') cnt -= maxi[qri - 1] > mini[qri];
            if (qri < n && c[qri] == 'L' && c[qri + 1] == 'R') cnt -= maxi[qri] > mini[qri + 1];
                        
            c[qri] ^= 'L' ^ 'R';
            
            
            if (qri > 1 && c[qri - 1] == 'L' && c[qri] == 'R') cnt += maxi[qri - 1] > mini[qri];
            if (qri < n && c[qri] == 'L' && c[qri + 1] == 'R') cnt += maxi[qri] > mini[qri + 1];
            
            
            
            if(cnt==0) yes
            else no
        }
    }

    return 0;
}
