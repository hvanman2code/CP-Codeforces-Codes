#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main(){
    int n=0,m=0;
    cin>>n>>m;

    int arr[n];
    for(int i=0;i<n;i++){

        cin>>arr[i];

    }
    sort(arr,arr+n);

    int sum=0;
    for(int i=0;arr[i]<0 && i<m;i++){
        sum-=arr[i];
    }

    cout<<sum;

    return 0;
}