#include<bits/stdc++.h>

using namespace std;

int main(){
        int t=0;
        cin>>t;
        while(t--){
                int x=0,n=0,m=0;
        cin>>x>>n>>m;
        while((n>0 || m>0) && x>0){
                if(n>0){
                        if(x>=40){
                                x=x/2 + 10;
                                n--;
                        }
                        else if(m>0) {
                                x-=10;
                                m--;
                        }
                        else {
                                x=x/2 + 10;
                                n--;

                        }
                }
                if(m>0){
                        if(x<=40 ){
                                x=x-10;
                                m--;
                        }
                        else if(n>0) {
                                x=x/2 + 10;
                                n--;
                        }
                        else {
                               x=x-10;
                                m--; 
                                
                        }
                }
                
                

        }
        if(x>0) cout<<"NO\n";
        else cout<<"YES\n";

        }
        return 0;
}