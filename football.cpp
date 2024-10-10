#include<bits/stdc++.h>

using namespace std;

int main(){
        int n=0;
        cin>>n;
        string a,b,c;
        int ca=0,cb=0;
        cin>>a;
        ca++;
        for(int i=0;i<n-1;i++){
                cin>>c;
                if(c==a) ca++;
                else {
                        b=c;
                        cb++;
                }
        }

        if(cb>ca) cout<<b;
        else cout<<a;

        return 0;
}