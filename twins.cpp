#include<bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    int n=0;
    cin>>n;

    int arr[n],sum=0;

    for(int i=0;i<n;i++){

        cin>>arr[i];
        sum+=arr[i];
    }

    int count=0,take=0;
    

    sort(arr, arr + n);

    for(int i=n-1;i>=0 && take<=sum/2;i--){
        take+=arr[i];
        count++;
    }

    cout<<count;

    return 0;
}