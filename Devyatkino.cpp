/*
        Author :: Hvanman2code


        "Do You Know How It Works B'coz I Don't"

*/


#include<bits/stdc++.h>
using namespace std;



#define  endl            '\n'
#define  ll              long long int
#define  srt(arr)        sort(arr.begin(),arr.end())
#define  fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define  yes             cout<<"YES\n";
#define  no              cout<<"NO\n";


const int M=1000000007;


ll lmx(ll a,ll b){
    return a>b ?  a :  b;
    
}

ll lmn(ll a,ll b){
    return (a<b) ?  a : b ;
}

ll mll(int a,int b){
    return a*1LL*b;
}


bool is7(ll x) {
    while (x > 0) {
        if (x % 10 == 7) return true;
        x /= 10;
    }
    return false;
}



int main() {
    fast;
    
    int t;
    cin >> t;
    while (t--) {
        ll n,steps=0,cl;
        cin >> n;
        cl=n;
        while(!is7(n)){
            n+=9;
            steps++;

        }
        n=cl;
        ll mnst=steps;
        steps=0;
        while(!is7(n) && steps<mnst){
            n+=99;
            steps++;

        }
        mnst=lmn(mnst,steps);
        n=cl;
        steps=0;
        while(!is7(n) && steps<mnst){
            n+=999;
            steps++;

        }
        mnst=lmn(mnst,steps);
        n=cl;
        steps=0;
        while(!is7(n) && steps<mnst){
            n+=9999;
            steps++;

        }
        mnst=lmn(mnst,steps);
        n=cl;
        steps=0;
        while(!is7(n) && steps<mnst){
            n+=99999;
            steps++;

        }
        mnst=lmn(mnst,steps);
        n=cl;
        steps=0;
        while(!is7(n) && steps<mnst){
            n+=999999;
            steps++;

        }
        mnst=lmn(mnst,steps);
        n=cl;
        steps=0;
        while(!is7(n) && steps<mnst){
            n+=9999999;
            steps++;

        }
        mnst=lmn(mnst,steps);
        n=cl;
        steps=0;
        while(!is7(n) && steps<mnst){
            n+=99999999;
            steps++;

        }
        mnst=lmn(mnst,steps);
        n=cl;
        steps=0;
        while(!is7(n) && steps<mnst){
            n+=999999999;
            steps++;

        }
        mnst=lmn(mnst,steps);
        n=cl;
        steps=0;
        cout<<mnst<<endl;



    }

    
    return 0;
}
