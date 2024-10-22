#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define pb push_back
#define s second
#define f first
#define vi vector<int>
#define vvi vector<vi>


int n,q;
string S[2<<17];
map<string,vi >mp;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;
    cin>>t;
	while(t--){
		cin>>n>>q;
		mp.clear();
		for(int i=0;i<n;i++){
			cin>>S[i];
			mp[S[i]].push_back(i);
		}
		for(;q--;){
			int x,y;
            cin>>x>>y;
            x--,y--;
			if(x>y)swap(x,y);
			if(S[x][0]==S[y][0]||S[x][0]==S[y][1]||S[x][1]==S[y][0]||S[x][1]==S[y][1]){
				cout<<y-x<<"\n";
				continue;
			}
			int ans=1e9;
			for(auto it=mp.begin();it!=mp.end();it++)if(it->f!=S[x]&&it->f!=S[y]){
				auto jj=lower_bound(it->s.begin(),it->s.end(),x)-it->s.begin();
				for(int j:{jj-1,jj})if(0<=j&&j<it->s.size()){
					int v=it->s[j];
					ans=min(ans,abs(x-v)+abs(v-y));
				}
			}
			if(ans==1e9)ans=-1;
			cout<<ans<<"\n";
		}
	}
}