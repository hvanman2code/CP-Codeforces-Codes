#include<bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int mid=(x+y+z)/3,ans=mid;
        int ansi=abs(mid -x) + abs(mid -y) + abs(mid -z);
        ansi=min(ansi,abs(x -x) + abs(x -y) + abs(x -z));
        ansi=min(ansi,abs(z -x) + abs(z -y) + abs(z -z));
        ansi=min(ansi,abs(y -x) + abs(y -y) + abs(y -z));
    cout<<ansi<<endl;
    }


    return 0;
}