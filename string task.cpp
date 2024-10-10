#include<bits/stdc++.h>

using namespace std;

int main(){
        string a,b="";
        cin>>a;
        int l=a.length();
        for(int i=0;i<l;i++){
                if(a[i]=='a' || a[i]=='e' || a[i]=='i' ||a[i]=='y'|| a[i]=='Y'|| a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U') continue;
                else if(a[i]<95) {
                        b+='.';
                        b+=(a[i]+32);
                }
                else {
                        b+='.';
                        b+=a[i];
                }
        }

        cout<<b;


        return 0;
}