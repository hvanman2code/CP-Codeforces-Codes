#include<bits/stdc++.h>

using namespace std;

#define ll long long int

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(2*a - b <=0) cout<<0;
        else if(a>b) cout<<a;
        else cout<<2*a-b;
        cout<<"\n";

        
    }
    


    return 0;
}