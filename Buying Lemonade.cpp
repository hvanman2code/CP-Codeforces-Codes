#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){

        int n,k;
        cin>>n>>k;
        ll a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        ll pr=0,ct=0,el=n,scr=0;
        for(int i=0;i<n;i++){
            if(a[i]-ct==0){
                pr++;
                el--;
                // cout<<pr<<' '<<'1'<<' ';
            }
            else{
                if(scr+el*(a[i]-ct)<k){
                    
                    scr+=(a[i]-ct)*el;
                    pr+=el*(a[i]-ct)+1;
                    el--;
                    ct=a[i];
                    // cout<<pr<<' '<<'2'<<' ';
                    
                }
                else {
                    pr+=k-scr;
                    scr=k;
                    // cout<<pr<<' '<<'3'<<' ';
                }
            }
            if(scr>=k) break;
        }
        cout<<pr<<endl;

    }

    return 0;
}