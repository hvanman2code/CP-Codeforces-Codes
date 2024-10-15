/*
        Author :: Hvanman2code

*/
#include<bits/stdc++.h>

using namespace std;
long long  a[500005],n,ans,x;
int main(){
    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]=a[i-1]+a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]*3==a[n-1]*2)ans+=x;
        if(a[i]*3==a[n-1])x++;
    }
    cout<<ans;
    return 0;
}