#include<iostream>

using namespace std;

int main(){
    int n=0;
    cin>>n;
    int ans=0;
    while(n>0){
        ans+=n&1;
        n/=2;

    }
    cout<<ans;

    return 0;
}