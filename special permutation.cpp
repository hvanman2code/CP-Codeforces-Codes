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
        int n;
        cin>>n;
        int nc=n;
        int a=2,b=4,c=1,d=3;
        if(n<4) cout<<-1<<endl;
        else {
        if(n%4==0){
            while(n>0){
            cout<<a<<' ';
            a+=4;
            n--;
            if(n>0) cout<<b<<' ',n--,b+=4;
            if(n>0) cout<<c<<' ',n--,c+=4;
            if(n>0) cout<<d<<' ',n--,d+=4;

        }
        }
        else if(n%4==1){
            while(n>1){
            cout<<a<<' ';
            a+=4;
            n--;
            if(n>1) cout<<b<<' ',n--,b+=4;
            if(n>1) cout<<c<<' ',n--,c+=4;
            if(n>1) cout<<d<<' ',n--,d+=4;

        }
        cout<<nc<<' ';
        }
        else if(n%4==3){
            while(n>4){
            cout<<a<<' ';
            a+=4;
            n--;
            if(n>4) cout<<b<<' ',n--,b+=4;
            if(n>4) cout<<c<<' ',n--,c+=4;
            if(n>4) cout<<d<<' ',n--,d+=4;

        }
        cout<<nc-2<<' '<<nc<<' '<<nc-4<<' '<<nc-1<<' ';
        }
        else if(n%4==2){
            while(n>3){
            cout<<a<<' ';
            a+=4;
            n--;
            if(n>3) cout<<b<<' ',n--,b+=4;
            if(n>3) cout<<c<<' ',n--,c+=4;
            if(n>3) cout<<d<<' ',n--,d+=4;

        }
        cout<<nc-1<<' '<<nc-3<<' '<<nc<<' ';
        
        }
        cout<<endl;
        }
        
        
    }

    return 0;
}