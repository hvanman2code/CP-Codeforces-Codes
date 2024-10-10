#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=0;
    cin>>t;
    set<char> hi;
    while(t--){
        char x;
        cin>>x;
        char y=tolower(x);
        hi.insert(y);

    }
    if(hi.size()==26) cout<<"YES";
    else cout<<"NO";

    return 0;
}