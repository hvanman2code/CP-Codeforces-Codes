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
        ll n=0,k;
        cin>>n>>k;
        
        ll arr[n];
        tia(arr,n);
        sort(arr,arr+n);
        ll diff=0,o=0;
        for(int i=n-1;i>0;){
            //cout<<arr[i]<<' '<<arr[i-1]<<' '<<k<<' '<<diff<<endl;
            o=arr[i]-arr[i-1];
            if(k>=o ) arr[i-1]=arr[i],k-=o,i-=2;
            else arr[i-1]+=k,k=0,diff+=arr[i]-arr[i-1],i-=2;

            if(i==0) diff+=arr[0];
            
            
        }
        //if(n%2) diff+=arr[0]-k;
        //cout<<k<<' '<<diff<<endl;
        diff>0 ? cout<<diff<<endl : cout<<0<<endl;
        
    }

    return 0;
}