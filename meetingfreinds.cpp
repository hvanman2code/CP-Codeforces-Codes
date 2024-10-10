#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int m=(a+b+c)/3;
    int ans=0;
    ans=abs(a-m) + abs(b-m) + abs(c-m);
    ans=min(ans,(abs(a-b) + abs(c-b)));
    ans=min(ans,(abs(c-b) + abs(c-a)));
    ans=min(ans,(abs(a-c) + abs(a-b)));

    cout<<ans;


    return 0;
}