#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
    int t,n;
    cin>>t;
    ll a,b,c,d,x[100010],y[100010];
    while(t--){
        cin>>n;
		for(int i=1;i<=n;i++)  cin>>x[i]>>y[i];
		cin>>a>>b>>c>>d;
		ll minn=9223372036854775807;
		for(int i=1;i<=n;i++)  minn=min(minn,(x[i]-c)*(x[i]-c)+(y[i]-d)*(y[i]-d));
		ll dis=(a-c)*(a-c)+(b-d)*(b-d);
		if(minn>dis)  cout<<"YES\n";
		else  cout<<"NO\n";


    }



    return 0;
}