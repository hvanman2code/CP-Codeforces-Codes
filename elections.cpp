#include<bits/stdc++.h>

using namespace std;

int main(){

    int t=0;
    cin>>t;
    while(t--){
        int maxi=0,cnd=0,uv=0;
        cin>>cnd>>uv;
        int vs[cnd];
        long long int tvs[cnd]={0};

        for(int i=0;i<cnd;i++){
            cin>>vs[i];
            maxi=max(maxi,vs[i]);
        }
        tvs[0]=vs[0]+uv;
        for(int i=1;i<cnd;i++){
            tvs[i]=tvs[i-1]+vs[i];
        }
        for(int i=0;i<cnd;i++){
            if(vs[i]==maxi) {
                int y=0;
                for(int j=0;j<i;j++){
                    if(vs[j]==maxi || tvs[0]>=maxi){
                        y++;
                        break;
                    }
                }
                if(y) cout<<i<<' ';
                else cout<<0<<' ';

            }
            else {
                if(tvs[i]>=maxi) cout<<i<<' ';
                else cout<<i+1<<' ';
            }
        }

        cout<<endl;


    }

    return 0;
}