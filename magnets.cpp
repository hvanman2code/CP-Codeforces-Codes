#include<bits/stdc++.h>

using namespace std;

int main(){
    int n=0;
    cin>>n;

    string pr,cr;
     
    int count=1;
    cin>>pr;
    for(int i=1;i<n;i++){
        cin>>cr;
        if(cr!=pr) count++;
        pr=cr; 
    }

    cout<<count;

    return 0;
}