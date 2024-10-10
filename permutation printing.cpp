#include<bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){

        arr[i]=i+1;
    }
    for(int i=0;i<n-1;i++){
        int count=0;
        for(int j=0;j<n-1;j++){

            if(arr[j]%arr[i]==0 && arr[j+1]%arr[i+1]==0){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                count++;
            }
        }  
        if(count==0) break; 
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    }

    return 0;
}