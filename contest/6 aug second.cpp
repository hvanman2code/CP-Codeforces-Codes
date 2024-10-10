#include<bits/stdc++.h>


#define ll long long int
#define tia(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define pb push_back
#define mp make_pair
#define ats(s,e) s.insert(e);
#define yes cout<<"YES\n";
#define no cout<<"NO\n";


using namespace std;


ll lmx(ll a,ll b){
    if(a>b) return a;
    return b;
}

ll lmn(ll a,ll b){
    if(a<b) return a;
    return b;
}



int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t=0;
    cin>>t;
    while(t--){
        ll a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    ll ans = 0;
    if(a1>b1&&a2>b2)   ans+=2;
    if(a1>b2&&a2>b1)   ans+=2;
    if(a1==b1&&a2>b2)   ans+=2;
    if(a1==b2&&a2>b1)   ans+=2;
    if(a2==b1&&a1>b2)   ans+=2;
    if(a2==b2&&a1>b1)   ans+=2;
    cout<<ans<<endl;
        
    }

    return 0;
}





