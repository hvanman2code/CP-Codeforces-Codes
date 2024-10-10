#include<iostream>

using namespace std;

int main(){
    int n=0,m=0;
    cin>>n>>m;
    int arr[m];
    double steps=0;
    for(int i=0;i<m;i++){
        cin>>arr[i];

    }
    steps=arr[0]-1;
    for(int i=1;i<m;i++){
        if(arr[i] > arr[i-1]){
            steps+= arr[i] - arr[i-1];
        }
        else {
            steps += n-arr[i-1] + arr[i]; 
        }
    }
    cout<<steps;

    return 0;
}