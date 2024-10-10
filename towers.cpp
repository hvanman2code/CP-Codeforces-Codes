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

int n,k;
vector<int> a;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    a.resize(n);
    tia(a,n);
    pair<int,int> pi[k];
    int ops=0;
    auto x=min_element(a.begin(),a.end());
    auto y=max_element(a.begin(),a.end());
    int i=0;
    
    pi[i] = {y - a.begin(), x - a.begin()};
    i++;
    while(*x<*y && ops<k){
        *x=*x+1;
        *y=*y-1;
        x=min_element(a.begin(),a.end());
        y=max_element(a.begin(),a.end());
        ops++;
        pi[i] = {y - a.begin(), x - a.begin()};
        i++;
    }
    cout<<*y - *x<<' '<<ops<<endl;
    for (int i = 0; i < ops ; ++i) {
    cout << pi[i].first+1 << ' ' << pi[i].second+1 << endl;
    }


    




    return 0;
}