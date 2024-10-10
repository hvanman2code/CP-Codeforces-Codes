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

    int m,s,i,j,k;
    cin>>m>>s;
    if( s > m*9 || s < 1 && m > 1) cout << "-1" << " " << "-1";
    else{
    for( k=s , i = m-1; i> -1 ; i--){
        int  digit = max(0 , k - 9*i);
        if( digit == 0 && i == m-1 && k) digit=1;
        cout << digit;
        k -= digit;
    }
    cout<<" "; 

    for( k=s, i = m-1 ; i > -1 ; i--){
        int digit = min(9 , k);
        cout << digit;
        k -= digit; 
    
    }
    
    }


    return 0;
}