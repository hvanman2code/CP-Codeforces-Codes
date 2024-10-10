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


    int t=0;
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        int x;
        ll sum=0;
        unordered_map<ll ,ll> m;
        for(ll i=0;i<n;i++){
            cin>>x;
            m[x-i]++;
        }
        ll v=0;

        for(auto it:m){
            v=it.second;
            if(v>1) sum+=(v*(v-1)) /2;
        }
        cout<<sum<<endl;

        
        
    }

    return 0;
}