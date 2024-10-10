#include<bits/stdc++.h>

using namespace std;
#define  ll long long int

ll mx(ll a,ll b){
    return a>b?a:b;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        long long int ce=0,co=0,mo=1,me=0,se=0;
        for(int i=0;i<n;i++){ 
            cin>>arr[i];
            if(arr[i]%2==0) ce++,me=mx(me,arr[i]);
            else co++,mo=mx(mo,arr[i]);
            
        }
        se=ce;
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                if(arr[i]>mo){
                    mo+=2*arr[i];
                    ce++;
                    break;
                }
                else mo+=arr[i];
            }
        }
        
        if(co==0) cout<<0<<endl;
        else cout<<ce<<endl;

        
    }

    return 0;
}