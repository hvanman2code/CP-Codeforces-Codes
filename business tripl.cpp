#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main(){
    int k=0,arr[12];
    cin>>k;
    int ans=0;
    if(k==0) cout<<0;
    else{
        for(int i=0;i<12;i++){
            cin>>arr[i];
        }
        sort(arr,arr+12);
        for(int i=11;i>=0 && k>0;i--){
                k-=arr[i];
                ans++;
        }

        if(k>0) cout<<-1;
        else cout<<ans;
        
    }

    return 0;
}