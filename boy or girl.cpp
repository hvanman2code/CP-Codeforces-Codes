#include<bits/stdc++.h>

using namespace std;

int countdistinct(string a){
    unordered_set<char> s;

    for(int i=0;i<a.length();i++){
        s.insert(a[i]);
    }

    return s.size();

}

int main(){
    string test;
    cin>>test;

    int check=countdistinct(test);

    if(check%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";

}