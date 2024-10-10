
// /*
//         Author :: Hvanman2code

// */


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
#define  i(a)            int a;
#define  c1(a)            cin>>a
#define  c2(a,b)          cin>>a>>b
#define  c3(a,b,c)        cin>>a>>b>>c
#define  l(a)            long long a;cin>>a
#define  s(a)            string a;cin>>a
#define  f(i,in,n)       for(ll i=in;i<n;i++)
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


    int t=0;
    cin>>t;
    while(t--){
        i(a);
        i(b);
        c2(a,b);
        if(a%2==0){
 
        if( b%2==0) yes
        else if((a-2*b)>=0 && (a-2*b)%2==0) yes
        else if((b-a/2)%2==0) yes
        else no 
        }
        else no
        
        
        
    }

    return 0;
}