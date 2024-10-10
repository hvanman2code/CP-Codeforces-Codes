#include<bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,a=0,b=0;
        cin>>n>>a>>b;
        if(2*a<b) cout<<a*n;
        else cout<<(b*(n/2)) + a*(n%2);

        cout<<endl;
    }

    return 0;
}