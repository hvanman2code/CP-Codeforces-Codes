#include<bits/stdc++.h>

using namespace std;

typedef string* strpntr;

void trimlowr(strpntr p){
    string s=*p;
    int i=s.length()-1,n=s.length();
    for(;i>=0;i--){
        if(s[i]>95){
            s[i]='\0';
            for(;i<n-1;i++){
                char temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
            }
            break;
        }
    }
    *p=s;
}


void trimupr(strpntr a){
    string s=*a;
    int i=s.length()-1,n=s.length();
    for(;i>=0;i--){
        if(s[i]<95){
            s[i]='\0';
            for(;i<n-1;i++){
                char temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
            }
            break;
        }
    }
    *a=s;
}

int main(){
    int t=0;
    cin>>t;
    while(t--){
        string in,out="";
    cin>>in;
    strpntr p=&out;
    for(int i=0;i<in.length();i++){
        if(in[i]=='B'){
            
            trimupr(p);
        }
        else if(in[i]=='b'){
            trimlowr(p);
        }
        else{
            out+=in[i];
        }
    }

    cout<<out<<endl;

    }

    return 0;
}