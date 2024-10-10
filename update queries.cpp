#include<bits/stdc++.h>

using namespace std;

void sortstring(string &str){
     sort(str.begin(), str.end());
 }
int main(){
    int n,m;
    cin>>n>>m;
    char arr[n];
    cin>>arr;
    int ar[m];
    for(int i=0;i<m;i++){
        cin>>ar[i];
    }
    string s;
    cin>>s;
    sortstring(s);
    for(int i=0;i<m;i++){
        arr[ar[i-1]]=s[i];
    }

    cout<<arr;


    return 0;
}