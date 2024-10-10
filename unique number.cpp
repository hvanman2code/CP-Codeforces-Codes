#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main(){
        int n=9,i=0,b=0;
        long long int ans=0;
        cin>>b;
        if(b>45) cout<<-1;
        else{
                while(b>=n && n>0){
                        b=b-n;
                        ans=ans + (n*(pow(10,i)));
                        cout<<ans<<" ";
                        i++;
                        n--;
                }
                ans+=b*pow(10,i);

                cout<<"\n"<<ans;
        }

        return 0;
}