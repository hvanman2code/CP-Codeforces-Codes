#include <bits/stdc++.h>

using namespace std;


//#define vi   vector<int>
#define yes  cout<<"YES\n";
#define no  cout<<"NO\n";

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string st;
        cin >> st;
        
        bool awin = false;
        
        for (int i = 0; i < n; ++i) {
            if (st[i] == '1' && (i == 0 || i == n - 1 || (i > 0 && st[i - 1] == '1') || (i < n - 1 && st[i + 1] == '1'))) {
                    awin = true;
                    break;
                
            }
        }
        
        if(awin) yes
        else no
    }

    return 0;
}