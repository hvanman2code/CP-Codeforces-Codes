#include<bits/stdc++.h>

using namespace std;
#define ll long long

ll mini(ll a,ll b){
    if(a>b) return a;
    return b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>>n;
    ll a=1,b=n;
    for(ll i=1;i*i<n;i++){
        //cout<<i<<' ';
        if(i*(n/i)==n && mini(i,n/i)<mini(a,b)  && __gcd(i,n/i)==1) a=i,b=n/i;
    }
    cout<<a<<" "<<b;


    return 0;
}