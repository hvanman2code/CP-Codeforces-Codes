#include<bits/stdc++.h>

using namespace std;


int main(){
    long int n=0;
    cin>>n;

    if(n>=0) cout<<n;
    else{
        int m=n/10;
        int ld=n%10;
        int sld=(n/10)%10;
        int m1=m-sld+ld;
        cout<<max(m,m1);
    }


    return 0;
}