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




int crs(const vector<string>& a) {
    int tc = 0;
    int cr = 0;

    
    for (int pos = 0; pos < 10; ++pos) { 
        int cs = cr;

        for (const string& num : a) {
            if (pos < num.size()) {
                cs += num[num.size() - 1 - pos] - '0';
            }
        }

        cr = cs / 10; 
        tc += cr; 
    }

    return tc;
}

bool cmp(const string& x, const string& y) {
    int max_len = max(x.size(), y.size());
    for (int i = 0; i < max_len; ++i) {
        int dx = (i < x.size()) ? (x[x.size() - 1 - i] - '0') : 0;
        int dy = (i < y.size()) ? (y[y.size() - 1 - i] - '0') : 0;

        if (dx != dy) {
            return dx < dy;
        }
    }
    return false;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

   
        sort(a.begin(), a.end(), cmp);

       
        int an = crs(a);
        cout << an << endl;
    }
    return 0;
}