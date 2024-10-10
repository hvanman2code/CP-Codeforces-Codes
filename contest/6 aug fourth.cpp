#include<bits/stdc++.h>


#define ll long long int
#define tia(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define pb push_back
#define mp make_pair
#define ats(s,e) s.insert(e);
#define yes cout<<"YES\n";
#define no cout<<"NO\n";


using namespace std;


ll lmx(ll a,ll b){
    if(a>b) return a;
    return b;
}

ll lmn(ll a,ll b){
    if(a<b) return a;
    return b;
}



int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    
    int t;
    cin >> t;
    while (t--) {
        string s, t;
        cin >> s >> t;
        int j = 0;
        for (char &c : s) {
            if (c == '?') {
                if (j < t.size()) c = t[j++];
            } else if (j < t.size() && c == t[j]) {
                j++;
            }
        }
        bool ok = 1;
        j = 0;
        for (char c : s) {
            if (c == t[j]) j++;
            if (j == t.size()) break;
        }
        if (j == t.size()) {
            for (char &c : s) {
                if (c == '?') c = 'a';
            }
            cout << "YES\n" << s << '\n';
        } else cout << "NO\n";
    }

    return 0;
}