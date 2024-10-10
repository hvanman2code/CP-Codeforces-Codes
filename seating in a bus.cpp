#include<bits/stdc++.h>

using namespace std;

int main(){
    int t=0,n;
    cin>>t;
    while(t--){
        cin>>n;
        unordered_set<int> s;
        int x;
        cin>>x;
        s.insert(x);
        bool a=true;
        for(int i=1;i<n;i++){
            cin>>x;
            if(s.find(x-1)==s.end() && s.find(x+1)==s.end()) a=false;
            else s.insert(x);
        }
        if(a) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}