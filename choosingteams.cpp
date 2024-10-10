#include<iostream>

using namespace std;

int main(){
    int n=0,k=0;
    cin>>n>>k;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){

        cin>>arr[i];
        arr[i]=5-arr[i];
        if(arr[i]>=k) count++;

    }
    int ans=count/3;

    cout<<ans;
    

    return 0;
}