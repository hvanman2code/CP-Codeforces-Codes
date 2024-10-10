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



class BIT {
public:
    vl t;
    int s;

    BIT(int n) {
        s = n;
        t.assign(n + 1, 0);
    }

    void u(int i, ll v) {
        for (++i; i <= s; i += i & -i) {
            t[i] += v;
        }
    }

    ll q(int i) {
        ll sum = 0;
        for (++i; i > 0; i -= i & -i) {
            sum += t[i];
        }
        return sum;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vl x(n);
        in(x);

        vl k(q);
        in(k);

        vector<pair<ll, int>> e;
        fl(i,0,n) {
            fl(j,i+1,n)e.emplace_back(x[i], 1),e.emplace_back(x[j] + 1, -1);
        }
        

        srt(e);

        BIT bit(2 * n);
        map<ll, ll> c;

        ll cur = 0;
        ll last = e[0].first;

        for (const auto& p : e) {
            ll pos = p.first;
            if (cur > 0) {
                c[cur] += pos - last;
            }
            cur += p.second;
            last = pos;
        }

        vl ans(q, 0);
        fl(i,0,q) if (c.find(k[i]) != c.end()) ans[i] = c[k[i]];
            
        

        out(ans);
        cout << '\n';
    }

    return 0;
}
