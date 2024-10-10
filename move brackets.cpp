#include<bits/stdc++.h>

using namespace std;

int main(){
        int t=0;
        cin>>t;
        while(t--){
                int n=0;
        cin>>n;
        int n1=0,n2=0;
        int ans=0;
        char d=' ';
        while(n--){
                char c;
                cin>>c;
                if(c=='(') n1++;
                else n2++;

                if(n2>n1 && c==')' && d!='(') ans++;
               // cout<<ans<<endl;
                d=c;
        }

        cout<<ans;
        cout<<endl;
        }

        return 0;
}