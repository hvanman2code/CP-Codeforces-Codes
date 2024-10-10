#include<bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n,x=0,y;
        cin>>n;
        while(n>0){
            y=n%10;
            n/=10;
            y=y*pow(10,x);
            if(y%10==9) y++;
            if(y!=0) cout<<y<<' ';
            x++;


        }
        cout<<endl;
    }




    return 0;
}