#include<bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,k=0,x=0;
    cin>>n>>k>>x;
    int record=n;

    int special=0,sathi=0;
    int count=0;

    int arr[k-1];
    int j=0;
    for(int i=1;i<=k;i++){
        if(i==x) continue;
        else arr[j]=i;
        j++;
    }
    for(int i=k-2;i>=0;i--){
        if(record%arr[i]==0){
            count=record/arr[i];
            n=0;
            special++;
            sathi=arr[i];
            break;
        }
        count=count+n/arr[i];
        n=n%arr[i];
    }

    if(n!=0) cout<<"NO\n";
    else{
        cout<<"YES\n"<<count<<"\n";
        if(special==0){
            for(int i=k-2;i>=0;i--){
            int times=record/arr[i];
            for(int j=0;j<times;j++){
                cout<<arr[i]<<" ";

            }
            record%=arr[i];
            

        }
        }
        else{
            for(int i=0;i<record/sathi;i++){
                cout<<sathi<<" ";
            }
        }
        cout<<"\n";
    }

    }
    return 0;
}