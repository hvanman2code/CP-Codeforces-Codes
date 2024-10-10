#include<bits/stdc++.h>

using namespace std;

long long mini(long long int a,long long int b){
        if(a>b) return b;
        return a;
}

long long maxi(long long int a,long long int b){
        if(a<b) return b;
        return a;
}


int main(){

        int t=0
        ;
        cin>>t;

        while(t--){
                long long int x=0,y=0,a=0,b=0;
                cin>>x>>y>>a>>b;
                cout<<mini((x+y)*a,(mini(x,y)*b + (maxi(x,y)-mini(x,y))*a));
                cout<<endl;
        }
}