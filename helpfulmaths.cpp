#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;


    int l=s.length();

    for(int j=0;j<(l+1)/2;j++){
        int count=0;
        for(int i=0;i+2<=l;i=i+2){
        if(s[i]>s[i+2]) {
            char temp=s[i];
            s[i]=s[i+2];
            s[i+2]=temp;
            
        }
        count++;
    }
    if(count==0) break;
    }

    cout<<s;

    return 0;
}