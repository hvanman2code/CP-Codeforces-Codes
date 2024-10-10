#include<bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        long long int x,n,k,k1;
        cin>>x>>n>>k;
        k1=k;
        while(k>0){
            if(x%n!=0){
                if(k>=(x/n + 1)*n - x){
                    x=(x/n + 1);
                    k=k-(x/n + 1)*n + x;
                }
                else {
                    x+=k;
                    k=0;
                }
            }
            else {
                if(k1!=k) x=x/n;
            }
        }
        if(x%n==0) x=x/n;

        cout<<x<<endl;
    }


    return 0;
}