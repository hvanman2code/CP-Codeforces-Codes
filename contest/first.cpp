#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
#include<string.h>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int toberemove[n];
        int minrmv=5000;
        for(int i=0;i<n;i++){
            cin>>toberemove[i];
            if(toberemove[i]<minrmv) minrmv=toberemove[i];
        }
        int arr[k];
        for(int i=0;i<k;i++){
            cin>>arr[i];
            if(arr[i]<minrmv) cout<<arr[i]<<" ";
            else cout<<minrmv-1<<" ";
        }
        cout<<"\n";

    }

    return 0;
}