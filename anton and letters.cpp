#include<bits/stdc++.h>

using namespace std;

int main(){

        string a,b="";
        getline(cin,a);
        set<char> c;
        for(int i=1;i<a.length()-1;i+=3){
                c.insert(a[i]);
        }
        cout<<c.size();
        


        return 0;
}