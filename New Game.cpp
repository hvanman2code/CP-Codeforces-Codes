/*
        Author :: Hvanman2code

*/


#include<bits/stdc++.h>
using namespace std;
 
#define  endl            '\n'
#define  ll              long long int
#define  pi              pair<int,int>
#define  pl              pair<ll,ll>
#define  f               first
#define  s               second
#define  vi              vector<int>
#define  vl              vector<ll>
#define  vvi             vector<vi>
#define  vpi             vector<pi>
#define  si              stack<int>
#define  qi              queue<int>
#define  mi              map<int,int>
#define  srt(arr)        sort(arr.begin(),arr.end())
#define  fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define  yes             cout<<"YES\n";
#define  no              cout<<"NO\n";

 
const int M=1000000007;
 


ll lmx(ll a,ll b){
    return a>b ?  a :  b;
    
}

ll lmn(ll a,ll b){
    return (a<b) ?  a : b ;
}

ll mll(int a,int b){
    return a*1LL*b;
}




int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        ll cs = 0, ms = 0, cd = 0;
        mi mp;

        
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }

        
        vector<int> ks;
        for (auto &pair : mp) {
            ks.push_back(pair.f);
        }
        sort(ks.begin(), ks.end());

        for (int i = 0; i < ks.size(); i++) {
            int cn = ks[i];
            int ccnt = mp[cn];

          
            if (i > 0 && (ks[i] - ks[i - 1] > 1)) {
                
                cs = ccnt;
                cd = 1;  
            } else {
                if (cd < k) {
                    cs += ccnt;
                    cd++;
                } else if (cd == k) {
                    cs -= mp[ks[i - k]];   
                    cs += ccnt;      
                }
            }

            ms = lmx(ms, cs);
        }
        
        cout << ms << endl;
    }
    return 0;
}