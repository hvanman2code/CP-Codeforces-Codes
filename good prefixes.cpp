#include<bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        long long int arr[n],sum=0,maxe=0,ans=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        for(int i=0;i<n;i++){
            if(maxe>=arr[i]){
                if(sum+arr[i]==maxe) {
                    ans++;
                }
                
                    sum+=arr[i];
            }
            else{
                sum+=maxe;
                maxe=arr[i];
                if(sum==maxe){
                    ans++;

                }

            }
        }
        cout<<ans<<endl;


    }


    return 0;
}