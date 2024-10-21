#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define pb push_back
#define vi vector<int>
#define vvi vector<vi>

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t; 
    cin >> t;
    while (t--){
        int n; 
        cin >> n;
        vvi v(n, vi(2));
        vi tp;
        for (int i = 0; i < n; ++i){
            cin >> v[i][0] >> v[i][1];
            tp.pb(v[i][0]);
            tp.pb(v[i][1]);
        }
        sort(tp.begin(), tp.end());
        map<int, int>mp;
        vvi dup(n, vi(2));
        int cnt = 1;
        for (auto it : tp) {
            mp[it] = cnt;
            cnt++;
        }
        for (int i = 0; i < n; ++i){
            dup[i][0] = mp[v[i][0]];
            dup[i][1] = mp[v[i][1]];
        }
        vvi cal(n, vi(3));
        for (int i = 0; i < n; ++i){
            int sm = dup[i][0] + dup[i][1];
            cal[i][0] = sm;
            cal[i][1] = v[i][0];
            cal[i][2] = v[i][1];
        }
        sort(cal.begin(), cal.end());
        for (int i = 0; i < n; ++i){
            cout << cal[i][1] << " " << cal[i][2] << " ";
        }
        cout << endl;
    }
    return 0;
}