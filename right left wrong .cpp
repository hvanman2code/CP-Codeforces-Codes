#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int ans=0;
        long long int arr[n+1],pa[n+1];
        arr[0]=0;
        pa[0]=0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            pa[i]=arr[i]+pa[i-1];

        }
        string ins;
        cin>>ins;
        string cc=" ";
        ins=cc+ins;

        int lp=1,rp=n;
        while(lp<=rp){
            if(ins[lp]=='L' && ins[rp]=='R') {
                ans+=pa[rp] - pa[lp] + arr[lp];
                ins[lp]='.';
                ins[rp]='.';
                lp++;
                rp--;
            }
            else if(ins[lp]=='L'){
                while(ins[rp]!='R' && rp>=lp) rp--;
                if(ins[rp]=='R'){
                    ans+=pa[rp] - pa[lp] + arr[lp];
                    ins[lp]='.';
                    ins[rp]='.';
                    lp++;
                    rp--;
                }

            }
            else if(ins[rp]=='R'){
                while(ins[lp]!='L' && rp>=lp) lp++;
                if(ins[lp]=='L'){
                    ans+=pa[rp] - pa[lp] + arr[lp];
                    ins[lp]='.';
                    ins[rp]='.';
                    lp++;
                    rp--;
                }

            }
            else {
                lp++;
                rp--;
            }


        }
        cout<<ans<<endl;
    }


    return 0;
}