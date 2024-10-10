#include<bits/stdc++.h>

using namespace std;

int main(){
        long long int n=0,m=0,a=0;
        cin>>n>>m>>a;
        long long int ans=((n/a)*(m/a)) + (m%a>0)*(n/a) + (n%a>0)*(m/a) + (n%a>0 && m%a>0);

        cout<<ans; 


        return 0;
}