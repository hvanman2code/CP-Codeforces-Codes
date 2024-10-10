#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main(){
    int n=0,m=0;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr,arr+m);
    int diff=0,mini=arr[m-1]-arr[0];
    for(int i=0;i<=m-n;i++){
        diff=arr[i+n-1]-arr[i];
        if(diff<mini) mini=diff;
    }
    mini=min(mini,diff);
    cout<<mini;

    return 0;
}