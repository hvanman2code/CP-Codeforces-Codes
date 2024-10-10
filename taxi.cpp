#include<bits/stdc++.h>

using namespace std;

int main(){

        int n=0;
        cin>>n;
        int taxi=0;
        int n1=0,n2=0,n3=0,n4=0;
        for(int i=0;i<n;i++){
                int a=0;
                cin>>a;

                if(a==1) n1++;
                if(a==2) n2++;
                if(a==3) n3++;
                if(a==4) n4++;
        }
        taxi+=min(n1,n3);
        int l=min(n1,n3);
        n1-=l;
        n3-=l;
        taxi+=n4+n3;
        taxi+=n2/2;
        n2=n2%2;

        if(n1>0 && n2!=0){
                taxi+=1;
                n2=0;
                n1=n1-2;

        } 
        if(n1>0) taxi+=(n1/4)  +  ((n1%4)>0);
        taxi+=n2;
        cout<<taxi;


        return 0;
}