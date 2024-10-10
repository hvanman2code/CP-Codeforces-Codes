#include<bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    cin>>t;

    while(t--){
        string s;
    cin>>s;

    int n1=0;
    int n0=0;
    int replace=0;
    int l=s.length();
    for(int i=0;i<s.length();i++){
        if(s[i]=='1') n1++;
        else n0++;
    }
    if(n1==n0) cout<<0;
    else{
        for(int i=0;i<l;i++){
            if(s[i]=='1'){
                if(n0>0){
                    replace++;
                    n0--;
                }
                else break;
            }
            if(s[i]=='0'){
                if(n1>0){
                    replace++;
                    n1--;
                }
                else break;
            }
        }
        cout<<l-replace;

    }
        cout<<"\n";
    }

    return 0;
}