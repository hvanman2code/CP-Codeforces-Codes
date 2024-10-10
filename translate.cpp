#include<bits/stdc++.h>

using namespace std;

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    int n=s.length();

    int count=0;
    for(int i=0;i<n;i++){
        if(s[i] != t[n-i-1]) {
            count++;
            break;
        }
    }

    if(count==0) cout<<"YES";
    else cout<<"NO";

    return 0;
}