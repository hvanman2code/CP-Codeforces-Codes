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
    while(t--){
        int n=0;
        cin>>n;
        // string s;
        // vector<int> a;
        int arr[n];
        int fa[n]={0};
        tia(arr,n);
        //sort(arr,arr+n);
        int met=1,mep=1;
        // 
        // else {
        //     for(int i=1;i<n;i++){
        //     if(arr[i]==arr[i-1]) met++;
        //     if(met>mep) mep=met;
        //     else met=1;
        // }
        // }

        for(int i=0;i<n;i++){
            fa[arr[i]]++;
        }
        mep=*max_element(fa,fa+n);
        if(n==1) mep=1;
    cout<<n-mep<<'\n';
        
        
    }

    return 0;
}