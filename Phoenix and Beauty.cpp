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
#define  i1(a)           int a
#define  i2(a,b)         int a,b
#define  i3(a,b,c)       int a,b,c
#define  c1(a)           cin>>a
#define  c2(a,b)         cin>>a>>b
#define  c3(a,b,c)       cin>>a>>b>>c
#define  l(a)            long long a;
#define  st(a)           string a;
#define  fl(i,in,n)      for(ll i=in;i<n;i++)
#define  fr(i,n,in)      for(ll i=n-1;i>=in;i--)
#define  in(arr)         f(i,0,arr.size()) cin>>arr[i]
#define  out(arr)        f(i,0,arr.size()) cout<<arr[i]<<" "
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




int main(){

    fast;
    i1(t);
    c1(t);
    while (t--) {
        i2(n,k);
        c2(n,k);
        vi a(n);
        set<int> ue;
        for (int i = 0; i < n; i++) cin >> a[i],ue.insert(a[i]);
        
        
        if (ue.size() > k)     cout << -1 << endl;
        else {
            vi ptrn(ue.begin(), ue.end());
          
            while (ptrn.size() < k) ptrn.push_back(1);  
           
            cout<<ptrn.size()*n<<endl;

            for (int i = 0; i <n; i++) {
                for(int j=0;j<ptrn.size();j++)cout<<ptrn[j]<<" ";
      
            }
            cout << endl;
        }
    }
        
    return 0;
}