#include<bits/stdc++.h>

using namespace std;

int main(){
        int n=0,x=0;
        cin>>n>>x;
        int count=0;
        for(int i=1;i<=n;i++){
                if(x%i==0 && x/i<=n) count++;
        }

        cout<<count;

        return 0;
}