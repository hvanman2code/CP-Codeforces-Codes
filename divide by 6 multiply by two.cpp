#include<bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    cin>>t;

    while(t--){
        int n=0;
        cin>>n;
        int steps=0;
        if(n==1) cout<<0<<endl;
        else{
            for(steps=0;n>6;steps++){
            if(n%6==0) n=n/6;
            else if(n%3==0) n*=2;
            else break;
        }
        if(n==3) cout<<steps+2<<endl;
        else if(n==6) cout<<steps+1<<endl;
        else cout<<-1<<endl;
        }

    }

    return 0;
}