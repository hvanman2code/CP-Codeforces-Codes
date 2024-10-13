#include<bits/stdc++.h>
 
using namespace std;
 
#define f first 
#define s second 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v1(n),v2(n);
        for(int i = 0; i < n; i++) cin>>v1[i];
        v2=v1;
        sort(v2.begin(),v2.end());
        map<int,long long int> mp;
        for(int i = 0; i < n; i++) mp[v2[i]]++;
        long long int ps=0;
        for(auto& c : mp){
            c.s=ps+c.s*c.f;
            ps=c.s;
            //cout<<c.f<<' '<<c.s<<"\n";
 
        }
        // for(auto c:mp){
        //     cout<<c.f<<' '<<c.s<<"\n";
        // }
        long long int ans=0;
        for(int i=n-1;i>0;i--){
            ans=v2[i];
            if(mp[v2[i-1]]<v2[i]) break;
        }
        
        int ct=0;
        for(int i=0;i<n;i++) if(v1[i]>=ans) ct++;
        cout<<ct<<"\n";
        for(int i=0;i<n;i++) if(v1[i]>=ans) cout<<i+1<< ' ';
        cout<<endl;
 
    }
 
 
    return 0;
}