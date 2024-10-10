#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int c=m-1;
    bool p=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2==0 || j==c) {
             cout<<'#';
             if(j==c) {c=m-1-c;continue;}  
            }
            else cout<<'.';
        }
        cout<<'\n';

    }

    return 0;
}