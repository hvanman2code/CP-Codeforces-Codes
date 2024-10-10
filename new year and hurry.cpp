#include<bits/stdc++.h>

using namespace std;

int main(){
        int n=0,k=0,t=240;
        cin>>n>>k;
        t=t-k;
        int i=1;
        for(i =0;i<n;){
                i++;
                t-=5*i;
                if(t<0 || i==n) break;

        }
        if(t<0) cout<<i-1;
        else cout<<i;

        return 0;
}