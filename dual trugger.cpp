#include<bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0;
    cin>>n;
    string s;
    cin>>s;
    int n1=0,c1=0;
    s+='_';
    for(int i=0;i<n-1;i++){
        if(s[i]=='1') n1++;
        if(s[i]=='1' && s[i+1]=='1') c1++;
    }
    if(s[n-1]=='1') n1++;
    if((n1%2==0 && n1!=2) || (n1==2 && c1==0)) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
    }
    return 0;

}