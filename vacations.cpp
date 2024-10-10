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

        int n=0;
        cin>>n;
        int p=3,x;
        int r=0;
        while(n--){
            cin>>x;
            if( x==0 || (x==p && x!=3) ) r++,p=0;
            else (x==3) ? p=3-p :  p=x;
            
        } 
    
        
        
        
    
        std::cout<<r;
        


    return 0;
}