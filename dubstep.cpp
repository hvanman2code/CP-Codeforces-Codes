#include<bits/stdc++.h>

using namespace std;

int main(){
    string take;
    cin>>take;

    string give="";
    
    for(int i=0;i<take.length();){
        if( take[i] =='W' && take[i+1] =='U' && take[i+2] =='B' ){
            i+=3;
            give+=" ";
            continue;
        }
        else{
            give+=take[i];
            i++;
            continue;
        }
    }
    cout<<give;

    return 0;

}