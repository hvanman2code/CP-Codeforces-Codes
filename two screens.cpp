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


int lcs( string& s,string& t) {
    int n = s.size(), m = t.size();
    int maxl = 0;

   
    for (int len = 1; len <= min(n, m); ++len) {
        if (s.substr(n - len,n) == t.substr(0, len))  maxl = len;
        
    }
    // for (int len = 1; len <= min(n, m); ++len) {
    //     if (t.substr(n - len,n) == s.substr(0, len))  maxl = max(maxl,len);
        
    // }
    for (int len = 1; len <= min(n, m); ++len) {
        if (t.substr(0,len) == s.substr(0, len))  maxl = max(maxl,len);
        
    }
    return maxl;
}

int main() {
    fast;

    int q;
    cin >> q;

    while (q--) {
        string s, t;
        cin >> s >> t;

        int k = lcs(s, t);
        if(k>0) k--;
        int result = s.size() + t.size() - k ;  
        cout << result << '\n';
    }

    return 0;
}