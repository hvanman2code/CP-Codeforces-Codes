#include<bits/stdc++.h>
#include<algorithm>
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
        sort(arr,arr+n);
        int ans=0;

        arr[n]=-10;

        for(int j=0;j<n-1;j++){
                if(arr[j]==arr[j+1] && arr[j]==arr[j+2]) {
                        ans++;
                        j+=2;
                }
        }

        cout<<ans<<"\n";

        }

        return 0;
}