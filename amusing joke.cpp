#include<bits/stdc++.h>

using namespace std;

int main(){
        string a,b,c;
        cin>>a>>b>>c;
        int a1=0,b1=0,c1=0;
        a+=b;

        sort(a.begin(),a.end());
        sort(c.begin(),c.end());

        
        if(a==c ) cout<<"YES";
        else cout<<"NO";

        return 0;
}