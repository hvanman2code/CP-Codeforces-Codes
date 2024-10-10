#include<bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)%2) cout<<-1<<endl;
        else {
            if(a<c-b) cout<<a+b-1+((c-b-a)%2==0)<<endl;
            else cout<<c-b + (b-(a-c+b)/2) + a-c+b<<endl;
            
        }
    }

    return 0;
}