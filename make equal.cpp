#include<bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        int sum=0;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];

        }
        int tr=sum/n;
        int cnt=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]<tr) {
                cnt++;
                break;
            }
            arr[i+1]+=arr[i]-tr;
            arr[i]-=tr;
        }

        if(cnt) cout<<"NO\n";
        else cout<<"YES\n";
        

    }
}