#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){

        string s;
        cin>>s;
        char a=s[0],b=s[1],c=s[2];
        int n=s.size();
        if(n<3) cout<<"NO\n";
        else if(n==3) {
            if(a!='1' || b!='0' || c<'2' ) cout<<"NO\n";
            else cout<<"YES\n";
        }
        else {
            if(a!='1' || b!='0' || c=='0' ) cout<<"NO\n";
            else cout<<"YES\n";

        }
    }


    return 0;
}