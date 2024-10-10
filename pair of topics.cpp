/*
        Author :: Hvanman2code

*/


#include <bits/stdc++.h>
using namespace std;

#define endl           '\n'
#define ll             long long int
#define pi             pair<int, int>
#define pl             pair<ll, ll>
#define f              first
#define s              second
#define vi             vector<int>
#define vl             vector<ll>
#define vvi            vector<vi>
#define vpi            vector<pi>
#define si             stack<int>
#define qi             queue<int>
#define pqd            priority_queue<int>
#define pqa            priority_queue<int, vi, greater<int>>
#define mi             map<int, int>
#define pb             push_back
#define i(a)           int a;
#define c1(a)            cin >> a
#define c2(a, b)          cin >> a >> b
#define c3(a, b, c)        cin >> a >> b >> c
#define l(a)            long long a;cin >> a
#define s(a)            string a;cin >> a
#define f(i, in, n)       for (ll i = in; i < n; i++)
#define fr(i, n, in)      for (ll i = n - 1; i >= in; i--)
#define in(arr)         f(i, 0, arr.size()) cin >> arr[i]
#define out(arr)        f(i, 0, arr.size()) cout << arr[i] << " "
#define srt(arr)        sort(arr.begin(), arr.end())
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ats(s, e)        s.insert(e);
#define yes             cout << "YES\n";
#define no              cout << "NO\n";

const int M = 1000000007;

ll lmx(ll a, ll b) {
    return a > b ? a : b;
}

ll lmn(ll a, ll b) {
    return (a < b) ? a : b;
}

ll mll(int a, int b) {
    return a * 1LL * b;
}

int n,x;
vi v;

int main() {
    fast;
    c1(n);
    v.resize(n); 
    in(v); 
    f(j,0,n) c1(x),v[j]-=x;
    srt(v);
    // auto it = find_if(v.begin(), v.end(), [](int x) { return x >= 0; });
    // int i = distance(v.begin(), it), j;
    // j = i;
    // if(j !=0) j--;
    // i(ans)
    // ans=0;
    // //out(v);

    // //cout<<'\n'<<i<<' '<<j<<'\n';
    // while(i<n && j>=0){
    //     if(j==0 && v[i] + v[j]>0) ans+=i-j,i++;
    //     else {
    //         while(j>0 &&  v[i]+v[j-1]>0) j--;
    //         if(v[i] + v[j]>0) ans+=i-j;
    //         i++;
    //         //cout<<"2 "<<ans<<' ';
    //     }
        
    // }
    i(ans)
    ans=0;
    for (int i = 0; i < n; ++i) {
        if (v[i] > 0) ans += (n - i - 1);
         else {
            auto it = upper_bound(v.begin() + i + 1, v.end(), -v[i]);
            ans += distance(it, v.end());
        }
    }
    cout << ans;
    
    return 0;
}