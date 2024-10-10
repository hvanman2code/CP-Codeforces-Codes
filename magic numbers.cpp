#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int a=s.length();
    int c4=1,nc=0;
    if(s[0]!='1') cout<<"NO";
    else{
        for(int i=1;i<a;i++){
            if(s[i]!='1' && s[i]!='4') {
                nc++;
                break;
            }
            if(s[i]=='4' && s[i+1]=='4') c4++;
            else c4=1;
            if(c4>2) {
                c4=3;
                break;
            }
        }

        if(nc>0 || c4>2) cout<<"NO";
    else cout<<"YES";
    }

    


    return 0;
}