#include<bits/stdc++.h>

using namespace std;

int t,n;
vector<int> v;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>t;
    while(t--){
        cin>>n;
        v.resize(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        //int ans;
        for(int i=0;i<n-1;i++){
            v[i+1]= v[i] + (v[i+1]-v[i])/2;
        }

        cout<<v[n-1]<<endl;
    }

    return 0;
}