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


    int t=0;
    cin>>t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        sort(s.begin(), s.end());
        
        ll l=0,r=n-1;
        while(l<r){
        cout<<s[l]<<s[r];
        l++,r--;
        }
        if(l==r) cout<<s[l];
        cout<<endl;

        
    }

    return 0;
}