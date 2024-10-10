#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
#include<string.h>

using namespace std;

void prper(int n){
        for(int i=1;i<=n;i++){
                cout<<i<<" ";
        }
}

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        int per[n];
        for(int i=0;i<n;i++){
                per[i]=i+1;
        }
        int ms=n*(n+1)*(4*n-1)/6;
        int moves=2*n;
        cout<<ms<<" "<<moves<<"\n";
        for(int j=n;j>0;j--){
                
                        cout<<2<<" "<<j<<' ';
                        prper(n);
                        cout<<endl;
                        cout<<1<<" "<<j<<' ';
                        prper(n);
                        cout<<endl;
                        
        
        }
        

    }

    return 0;
}