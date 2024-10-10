#include<bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    for(int i=0;i<n-2 && arr[i]>=0;i++){
        
            int temp=arr[i];
            arr[i+1]-=2*temp;
            arr[i]-=temp;
            arr[i+2]-=temp;
        
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            count++;
            break;
        }
    }
    if(count==0) cout<<"YES\n";
    else cout<<"NO\n";
    }

    return 0;
}