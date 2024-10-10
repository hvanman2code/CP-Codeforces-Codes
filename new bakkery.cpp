#include<bits/stdc++.h>

using namespace std;

long long int maxa(long long int a,long long int b){
    if(a>b) return a;
    return b;
}

int main(){
    int t=0;
    cin>>t;
    while(t--){
        long long int n,a,b,k,pr=0,i;
        cin>>n>>a>>b;
        k=maxa(0,b-a);
        if(b-a>n) k=n;

        //cout<<k<<' ';
        pr+=(b+1)*k;
        pr-=k*(k+1)/2;
        pr+=(n-k)*a;

        cout<<pr<<endl;


    }


    return 0;
}