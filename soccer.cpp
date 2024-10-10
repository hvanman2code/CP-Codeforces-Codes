#include<bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        long long int fi=0,si=0,ff=0,sf=0;
        cin>>fi>>si;
        cin>>ff>>sf;
        if(fi>si && (ff-fi)>=(sf-fi)) cout<<"YES\n";
        else if(fi<=si && (ff-fi)<=(sf-fi)) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}