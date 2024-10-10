#include<bits/stdc++.h>

using namespace std;
string s;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a=0,b=0,c=0,d=0;
        cin>>n;
        
        cin>>s;
        for(int i=0;i<4*n;i++){
            char ch=s[i];
            //cout<<ch<<' ';
            if(ch=='A')    a++;
            
            if(ch=='B')    b++;
            
            if(ch=='C')    c++;
            
            if(ch=='D')    d++;
            
            

        }

        //cout<<s<<' '<<a<<' '<<b<<' '<<c<<' '<<d<<endl;
        cout<< min(a,n) + min(b,n) + min(c,n) +min(d,n) <<endl;
    }

    return 0;
}