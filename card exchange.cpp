#include<bits/stdc++.h>

using namespace std;

int main(){
        int t=0;
        cin>>t;
        while(t--){
                int n=0,k=0;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
                cin>>arr[i];
        }
        int kc=0;int cc=1;
        sort(arr,arr+n);
        for(int i=1;i<n;i++){
                if(arr[i]==arr[i-1]) cc++;
                else cc=1;
                if(cc==k){
                        kc++;
                        break;
                }

        }
        if(kc>0) cout<<k-1<<endl;
        else cout<<n<<endl;
        }


        return 0;
}