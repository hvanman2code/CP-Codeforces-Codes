#include<bits/stdc++.h>


#define ll long long int
#define tia(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define pb push_back
#define mp make_pair
#define ats(s,e) s.insert(e);
#define yes cout<<"YES\n";
#define no cout<<"NO\n";


using namespace std;


ll lmx(ll a,ll b){
    if(a>b) return a;
    return b;
}

ll lmn(ll a,ll b){
    if(a<b) return a;
    return b;
}



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t=0;
    cin>>t;
    while(t--){
        int n=0,s,m;
        cin>>n>>s>>m;
        vector<int> a;
        int arr[n];
        int cnt=0;
        int prv=0,crf,crl;
        for(int i=0;i<n;i++){
            cin>>crf>>crl;
            if(crf-prv >=s) cnt++;

            prv=crl;
        }
        if(m-prv >=s) cnt++;

        if(cnt) yes
        else no

        
        
    }

    return 0;
}