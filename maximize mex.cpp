#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        
        int n,y;
        cin>>n>>y;
        map<int,int> m;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            m[x]++;
        }
        int mex=0;
        int i=0;
        bool cs=true;
        for(; cs ; i++){
            if(m[i]==0) break;
            m[i+y]+=m[i]-1;
        }
        cout<<i<<endl;
    
    }

    return 0;
}