#include<bits/stdc++.h>

using namespace std;

int main(){
        int a=0,b=0;
        cin>>a>>b;

        // int c=a;
        // while(c/b){
        //         a+=(c/b) ;
        //         c=(c/b) + c%b;
        // }

        // //a+=c;

        //cout<<a;

        // alternate 
        cout<<(a*b-1)/(b-1);
        return 0;
}