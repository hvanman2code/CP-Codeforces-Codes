#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main(){

    string a,b;
    cin>>a>>b;

    int l=a.length();

    int al,bl;
    int check=0;
    for(int i=0;i<l;i++){
        al=0;
        bl=0;
        if(a[i]>96) al+=a[i]-32;
        else al+=a[i];
        if(b[i]>96) bl+=b[i]-32;
        else bl+=b[i];
        if(al==bl) continue;
        else {
            check=al-bl;
            break;
        }
    }
    if(check>0) cout<<1;
    else if(check<0) cout<<-1;
    else cout<<check;
    


    return 0;
}