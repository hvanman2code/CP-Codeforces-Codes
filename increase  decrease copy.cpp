#include<bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        int a[n+1],b[n+1],inb=0,mr=0,mnr=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<=n;i++){
            cin>>b[i];
        }
        long long int ans=0;
        mr=b[0];
        mnr=b[0];


        for(int i=0;i<n;i++){
            ans+=abs(b[i]-a[i]);
            mr=max(mr,b[i]);
            mr=max(mr,a[i]);
            mnr=min(mnr,b[i]);
            mnr=min(mnr,a[i]);
        }

        if(mr>=b[n] && mnr<=b[n]) inb=1;

        if(inb) cout<<ans+1;
        else cout<<ans+min(abs(b[n]-mr),abs(mnr-b[n]))+1;
        cout<<endl;





    }

    return 0;
}