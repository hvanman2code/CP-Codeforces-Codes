/*
        Author :: Hvanman2code
 
*/
 
#include<bits/stdc++.h>
 
 
using namespace std;
 
#define ll long long int
#define tia(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define pb push_back
#define mp make_pair
#define ats(s,e) s.insert(e);
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
 
 
 
 
 
ll lmx(ll a,ll b){
    if(a>b) return a;
    return b;
}
 
ll lmn(ll a,ll b){
    if(a<b) return a;
    return b;
}
 
ll mll(int a,int b){
    return a*1LL*b;
}
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
 
        if (n %2 == 0) {
            cout << -1 << "\n";
        } else {
            vector<int> p(n);
            int left = 0, right = n - 1;
            for (int i = 1; i <= n; i++) {
                if (i % 2 != 0) {
                    p[left++] = i;
                } else {
                    p[right--] = i;
                }
            }
            
            for (int i = 0; i < n; i++) {
                cout << p[i] << " ";
            }
            cout << "\n";
        }
    }
 
    return 0;
}