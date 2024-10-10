#include<bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,k=0;
        cin>>n>>k;
        int dia=0;
        if(k>0) dia++;
        k-=n;
        n-=1;
        while(k>0){
            if(k) {
                k-=n;
                dia++;
                
            }
            if(k>0) {
                k-=n;
                dia++;
                n--;
            }

        }

        cout<<dia<<endl;

    }

    return 0;
}