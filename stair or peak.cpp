#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    if(b>a && c>b) cout<<"STAIR\n";
    else if(b>a && c<b) cout<<"PEAK\n";
    else cout<<"NONE\n";
    }


    return 0;
}