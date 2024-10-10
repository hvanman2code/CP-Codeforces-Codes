/*
        Author :: Hvanman2code

*/


#include<bits/stdc++.h>


using namespace std;


#define ll long long int
#define tia(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define pb push_back
#define mp make_pair
#define ats(s,e) s.insert(e);
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define endl '\n'





ll lmx(ll a,ll b){
    if(a>b) return a;
    return b;
}

ll lmn(ll a,ll b){
    if(a<b) return a;
    return b;
}

ll mll(int a,int b){
    return a*1LL*b;
}



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    ll n;
    cin>>n;
    ll a[n],s[n+1],ss[n+1];
    s[0]=0,ss[0]=0;
    for(int i=0;i<n;i++) cin>>a[i] , s[i+1]=s[i]+a[i];
    
    sort(a,a+n);

    for(int i=0;i<n;i++)   ss[i+1]=ss[i]+a[i];

    int q,t,i,j;
    cin>>q;
    while(q--){
        cin>>t;
        cin>>i>>j;
        if(t==1) cout<<s[j]-s[i-1];
        else cout<<ss[j]-ss[i-1];
        cout<<endl;
        
    
    }
    



    return 0;
}