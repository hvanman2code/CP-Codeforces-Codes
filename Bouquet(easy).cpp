#include<bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){ 
        long long int n=0,m=0;
        cin>>n>>m;
        long long int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long int sum=0,ts=0,ce=arr[0];
        int ptr=0;
        for(int i=0;i<n;){
            if(arr[i]-ce<=1){
                ts+=arr[i];
                if(arr[i]==arr[ptr]) ptr=i;
                if(ts>sum  && ts<=m) sum=ts;
                i++;
            }
            else {
                i=++ptr;
                ce=arr[i];
                ts=0;
            }
        }

        cout<<sum<<endl;

    }
    return 0;
}