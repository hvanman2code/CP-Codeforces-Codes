#include<bits/stdc++.h>

typedef int64_t inti;
using namespace std;

int main(){
    inti n=0,k=0;
    cin>>n>>k;
    inti ans=0;
    if(k<=(n+1)/2) ans=2*k-1;
    else ans=2*(k - (n+1)/2);
 
    cout<<ans;
 
    return 0;
}