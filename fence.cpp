#include<bits/stdc++.h>

using namespace std;

int main(){
        int n=0,k=0;
        cin>>n>>k;
        int arr[n];

        for(int i=0;i<n;i++){
                cin>>arr[i];
        }

        int sum=0;
        for(int i=0;i<k;i++){
                sum+=arr[i];
        }
        int ans=1;
        int sm=sum;
        for(int j=1;j<n-k+1;j++){
                sm=sm-arr[j-1] + arr[j+k-1];
                if(sm<sum) {
                        sum=sm;
                        ans=j+1;
                }
                
        }


        cout<<ans;
        return 0;
}