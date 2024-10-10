#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    long long int sum=0;
    int x;
    if(n==1) cin>>x,cout<<x<<endl;
    else {
        while(n>0){
            cin>>x;
            sum+=x;
            n--;
            if(n>0) cin>>x,sum-=x,n--;
        }

        cout<<sum<<endl;
    }

    }

    return 0;
}