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



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>x;
        m[x]=i+1;
    }
    int cnt=0;
    if(m.size()>2){
        for(auto i : m ){
            cout<<i.second<<' ';
            cnt++;
            if(cnt==3) break;

        }
    }
    else cout<<"-1 -1 -1";
    cout<<endl;



        
    return 0;
}