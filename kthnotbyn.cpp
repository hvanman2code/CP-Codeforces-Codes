#include<bits/stdc++.h>


using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        long long int n,k,ans;
        cin>>n>>k;
        ans=n*((k-1)/(n-1)) + k - (n-1)*((k-1)/(n-1));
        cout<<ans<<endl;
    }    
    
    return 0;
}