#include<bits/stdc++.h>

using namespace std;

int main(){
    int n=0,m=0;
    cin>>n>>m;

    if((n==1 || m==1) && n*m>2){
        if(n*m%2==0) cout<<"Malvika";
        else cout<<"Akshat";
    }
    else {
        if((n+m)%4<2) cout<<"Malvika";
    else cout<<"Akshat";
    }


    return 0;
}