#include<bits/stdc++.h>

using namespace std;

const int N=1e5;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    bool ab=false,ba=false,bt=false;
    for(int i=0;i<n;i++){
        if(s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='A' && bt==false){
            bt=true;
            i+=2;
        }
        else if(s[i]=='B'&&s[i+1]=='A'&&s[i+2]=='B' && bt==false){
            bt=true;
            i+=2;
        }

        else if(s[i]=='A' && s[i+1]=='B' && ab==false){
            if(bt==false) {
                ab=true;
            s[i]='1';
            s[i+1]='1';
            }
            else {
                ab=true;
                ba=true;
                break;
            }
        }
        else if(s[i]=='B' && s[i+1]=='A' && ba==false){
            if(bt==false) {
                ba=true;
            s[i]='1';
            s[i+1]='1';
            }
            else {
                ab=true;
                ba=true;
                break;
            }
        }
        
    }
    //cout<<bt<<' '<<ab<<' '<<ba<<' ' ;
    bool ans=false;
    if(bt && (ab || ba)) ans=true;
    else if(ab&& ba) ans=true;
    cout<<(ans?"YES":"NO");


    return 0;
}