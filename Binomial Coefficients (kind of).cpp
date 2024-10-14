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

 
const int MOD=1000000007;
 


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

    ll t;
    cin>>t;
    ll n[t],k[t],pwr[100001],val=1;
    pwr[0]=1;
    for (int i = 1; i <= 100000; i++){
        val+=val;
        val=val%MOD;        
        pwr[i]=val;
    }
    
    for (int i = 1; i <= t; ++i) cin>>n[i];
    
    for (int i = 1; i <= t; ++i) cin>>k[i];
    
    for (int i = 1; i <= t; ++i)  cout<<pwr[k[i]]<<endl;
    
    return 0;
}