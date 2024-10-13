#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x,a,m=0;
    cin>>n>>a;
    for(int i=1;i<n;i++){
        cin>>x;
        m=max(x,m);
    }
    if(a>=m) cout<<'S';
    else cout<<'N';

    return EXIT_SUCCESS;
}