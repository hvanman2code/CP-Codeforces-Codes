#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int ans=min(n*a,(n/m)*b + (n%m)*a);
    ans=min(ans,(n/m + 1)*b);
    cout<<ans;


    return 0;
}