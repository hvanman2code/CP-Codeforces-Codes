#include<bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        long long int n=0;
    cin>>n;

    long long int x=0;
    int trial =0;

    for(long long int i=4;trial <30; ){
        if(n%(i-1)==0) {
            x=n/(i-1);
            break;
        }
        i=i*2;
        trial++;
    }
    cout<<x<<"\n";
    }

    return 0;
}

