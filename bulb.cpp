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
#define  pqd             priority_queue<int>
#define  pqa             priority_queue<int,vi,greater<int>>
#define  mi              map<int,int>
#define  pb              push_back
#define  l(a)            long long a;
#define  s(a)            string a;
#define  fl(i,in,n)      for(ll i=in;i<n;i++)
#define  fr(i,n,in)      for(ll i=n-1;i>=in;i--)
#define  in(arr)         fl(i,0,arr.size()) cin>>arr[i]
#define  out(arr)        fl(i,0,arr.size()) cout<<arr[i]<<" "
#define  srt(arr)        sort(arr.begin(),arr.end())
#define  fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define  ats(s,e)        s.insert(e);
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
        ll k;
    cin >> k;

    ll low = 1, high = 2 * k, ans = -1;

    while (low <= high) {
        ll mid = low + (high - low) / 2;
        ll ce = mid - static_cast<ll>(sqrt(mid));

        if (ce < k) low = mid + 1; 
        else if (ce> k) high = mid - 1; 
        else {
            ans = mid; 
            high = mid - 1; 
        }
    }

    cout << ans << endl;
      
    }

 return 0;
}