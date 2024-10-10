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
        string s;
        cin>>s;
        int arr[n+1];
        arr[0]=0;
        int cv=0;
        for(int i=1;i<=n;i++){
            cv=s[i-1]-'0';
            arr[i] = cv + arr[i-1];
        }
        // for(int i=1;i<=n;i++){
        //     cout<<arr[i]<<' ';
        // }


        long long int ans=0;
        unordered_map<int,int> m;
        for(int i=0;i<=n;i++){

            ans+=m[arr[i]-i]++;
        
        }
        cout<<ans<<endl;

        
        
    }

    return 0;
}