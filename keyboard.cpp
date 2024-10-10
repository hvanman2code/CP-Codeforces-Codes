#include<bits/stdc++.h>

using namespace std;

int main(){
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";

    char c;
    cin>>c;

    char i;
    while(cin>>i){
        cout<<s[s.find(i)-(c=='R')+(c=='L')];
    }

    return 0;
}