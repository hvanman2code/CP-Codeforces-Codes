#include<bits/stdc++.h>

using namespace std;

int digits(long long int n){
    int ans=0;
    while(n>0){
        ans++;
        n/=10;
    }
    return ans;

}

long long power(int dig){
    long long ans=1;
    for(int i=0;i<dig;i++){
        ans*=10;
    }
    return ans;
}

int main(){
    int t=0;
    cin>>t;
    while(t--){
        long long int n=0;
        cin>>n;

        int d=digits(n),c9=0,c1=0;
        //cout<<d<<' ';
        bool con= n/power(d-1)==1;
        //cout<<con<<" ";
        bool no0=true;
        long long int lm=power(d-2), cm=(n/10)%lm;
        //cout<<lm<<' ';

        for(int i=0;i<d-2 && no0;i++){
            if(cm%10==0) no0=false;
            cm/=10;
        }

        //con=con && ((n/lm)%10)%2;
        //cout<<con<<" ";
        con=con && no0;
        //cout<<con<<" ";
        con =con && n%10<9 && n>9;
        //cout<<con<<" "<<endl;
        if(con)cout<<"YES\n";
        else cout<<"NO\n";

        
    }

    return 0;
}