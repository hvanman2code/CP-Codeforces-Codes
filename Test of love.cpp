#include<bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int k,n,m,out=0;
        cin>>n>>m>>k;
        char arr[n+2];
        arr[0]='L';
        arr[n+1]='L';
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        int ptr=0,cnt=0,ll=0,lw=0;
        // for(int i=0;i<n+2;i++){
        //     cout<<arr[i];
        // }
        // cout<<endl;
        for( ; ptr<n+2; ){
            if(arr[ptr]=='L'){
                if(ptr+m>=n+1 && out==0) {
                    cout<<"YES\n";
                    out++;
                    break;
                }
                else {
                    int cl=ll,cw=lw;
                for(int i=ptr+m;i>ptr;i--){
                    if(arr[i]=='L') {
                        ll=i;
                        ptr=ll;
                        break;
                    }
                }
                if(cl==ll){
                    for(int i=ptr+m;i>ptr;i--){
                    if(arr[i]=='W') {
                        lw=i;
                        ptr=lw;
                        break;
                    }
                }
                //cout<<cw<<' '<<lw<<endl;
                }
                if(cl==ll && cw==lw && out==0) {
                    cout<<"NO\n";
                    out++;
                    break;
                }
            }
            }
            else if(arr[ptr]=='W'){
                cnt++;
                if(arr[ptr+1]=='C' || cnt>k) {
                    if(out==0) cout<<"NO\n",out++;
                    break;
                }
                else ptr++;
            }
            
        }
        if(ptr>=n+1 && out==0) cout<<"YES\n",out++;

    }



  
}