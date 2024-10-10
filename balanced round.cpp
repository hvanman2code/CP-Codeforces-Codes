#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main(){
        int t=0;
        cin>>t;
        while(t--){
                int n=0,k=0;
                cin>>n>>k;
                int arr[n];
                for(int i=0;i<n;i++){
                        cin>>arr[i];
                
                }
                sort(arr,arr+n);
                int cc=0,mc=0;
                for(int i=0;i<n-1;i++){
                        if(arr[i+1]-arr[i]<=k) cc++;
                        else {
                                mc=max(mc,cc);
                                cc=0;
                        }
                }
                mc=max(mc,cc);

                cout<<n-mc-1<<endl;
        }
        return 0;
}