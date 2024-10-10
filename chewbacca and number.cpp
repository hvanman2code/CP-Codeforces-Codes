#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    char c;
    int l=s.length();
    if(s[0]>'4' && s[0]!='9') c='0' + '9' - s[0];
    else c=s[0];
    cout<<c;
    for(int i=1;i<l;i++){
       // cout<<' '<<s[i]<<' ';
        c=s[i];
        if(s[i]>'4') c='0' + '9' - s[i];
        cout<<c;
        
    }

    return 0;
}