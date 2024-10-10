#include<bits/stdc++.h>

using namespace std;

int main(){
    int n=0;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0,count=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]) count++;
        else{
            ans=max(ans,count);
            count=1;
        }
    }
    ans=max(ans,count);
    cout<<ans;

    return 0;
}