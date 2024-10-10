#include<bits/stdc++.h>

using namespace std;

int main(){

        string a,b;
        cin>>a;
        b=a;
        int cup=0;
        for(int i=1;i<b.length();i++){
                if(isupper(b[i])) cup++;
                else break;
        }

        if(isupper(b[0]) && islower(b[1])) cout<<b<<endl;
        else if(islower(b[0]) && islower(b[1])) cout<<b<<endl;
        else {
                if(cup==b.length()-1) {
                        for(int i=0;i<b.length();i++){
                                if(isupper(b[i])) b[i]+=32;
                                else b[i]-=32; 
                        }

                        cout<<b<<endl;

                }
                else cout<<b;

        }
        



        return 0;
}