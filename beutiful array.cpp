#include<bits/stdc++.h>

#define ll long long int 

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        ll n,k,ops1=0,ops2=0,ps=0;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        pair<int ,bool> arr1[n];
        for(int i=0;i<n;i++){
            arr1[i].first=arr[i];
            arr1[i].second=true;
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if((arr1[j].first -arr1[i].first) % k==0 && arr1[i].second==true && arr1[j].second==true){
                    ps++;
                    ops1+=abs(arr1[i].first - arr1[j].first)/k;
                    arr1[i].second=false;
                    arr1[j].second=false;
                    break;
                }
            }
        }

        if(ps==n/2) cout<<ops1;
        else cout<<-1;
        cout<<endl;
        
    }

    return 0;
}