#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){
       int t=0;
       cin>>t;
       while(t--){
        ll n,f,a,b;
        cin>>n>>f>>a>>b;
        ll total= f;
        ll x=0,y=0;
        for(int i=0;i<n ;i++){
                cin>>x;
                ll cntop=(x-y)*a,desop=b;
                total-=min(cntop,desop);
                y=x;
        }
        ll resd=total;

        if(resd>0) cout<<"YES\n";
        else cout<<"NO\n";
       }



        return 0;
}