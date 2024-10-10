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
       ll l, r, L, R;
        cin >> l >> r >> L >> R;
         ll c = min(r, R) - max(l, L);
         c++;
         if (l == L)
           c--;
         if (r == R)
          c--;
        if(c>0) cout<<c+1<<endl;
        else cout<<1<<endl;





        
        
    }

    return 0;
}


/*

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
  
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}*/