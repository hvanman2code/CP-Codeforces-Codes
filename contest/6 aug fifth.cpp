#include<bits/stdc++.h>
#include<math.h>



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



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t=0;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int steps=0;
        double st=0;
        st=log(l+1)/log(3);
        steps+= int(st)+1;
        if((l+1)%3 != 0) steps+=2*(int(st)+1);
        else steps+=2*(int(st)+1)-1;

        for(int i=l+2;i<=r;){
            st=log(i)/log(3);
        steps+= int(st)+1;
        i++;
        }

        if(l==2) steps--;

        cout<<steps<<'\n';


        
        
    }

    return 0;
}