#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n;  
        vector<int> a(n);
     
        for (int i = 0; i < n; ++i) cin >> a[i];
       
        sort(a.begin(), a.end());

        
        long long int score = 0;
        score=(a[n-1]-a[0])*(n-1) ;
        cout << score << endl;
    }
    return 0;
}
