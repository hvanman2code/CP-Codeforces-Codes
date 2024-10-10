#include<iostream>
#include<string.h>


using namespace std;

int main(){
    int t=0;
    cin>>t;

    for(int i=0;i<t;i++){
        string arr;
        cin>>arr;
        int sum1=arr[0] + arr[1] + arr[2];
        int sum2=arr[3] + arr[4] + arr[5];

        if(sum1==sum2) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}