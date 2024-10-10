/*
        Author :: Hvanman2code

*/


#include<bits/stdc++.h>


using namespace std;


#define ll long long int
#define tia(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define pb push_back
#define mp make_pair
#define ats(s,e) s.insert(e);
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define endl '\n'





ll lmx(ll a,ll b){
    if(a>b) return a;
    return b;
}

ll lmn(ll a,ll b){
    if(a<b) return a;
    return b;
}

ll mll(int a,int b){
    return a*1LL*b;
}

int n;
multimap<int,int> m;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    int x,y;
    for(int i=0;i<n;i++)  cin>>x>>y,m.insert({x,y});
    auto it=m.begin();
    int ped=0,pe=it->first;
    for(auto i:m){
        //cout<<pe<<' ';
        if( i.second>=ped || pe==i.first)   ped=max(ped,i.second);
         else ped=i.first;
        pe=i.first;
        //cout<<ped<<'\n';
    }
    cout<<ped<<endl;




    return 0;
}