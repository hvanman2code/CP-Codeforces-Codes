#include<bits/stdc++.h>

using namespace std;

int main(){
    int x=0,n=0;
    cin>>x>>n;
    int sum=x;
    for(int i=n;x/i>=1;){

        sum+=x/i;
        x=x/i+x%i;
        
    }

    cout<<sum;

}