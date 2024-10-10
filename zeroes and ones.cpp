#include<bits/stdc++.h>

using namespace std;

int main(){
    int n=0;
    cin>>n;
    char s[1000000];

    int i=0;
    int c0=0,c1=0;
    while(n--){
        cin>>s[i];
        if(s[i]=='1') c1++;
        else c0++;
        i++;
}
    cout<<max(c0,c1)-min(c0,c1);
    return 0;
}