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




void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> last_pos;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        last_pos[a[i]] = i;  // store the last occurrence of each element
    }
    
    vector<pair<int, int>> elements;
    for (const auto& p : last_pos) {
        elements.push_back({p.second, p.first});  // pair of (last occurrence, element)
    }
    
    // Sort by the last occurrence
    sort(elements.begin(), elements.end());
    
    vector<int> result;
    for (const auto& p : elements) {
        result.push_back(p.second);
    }
    
    // Output the result
    cout << result.size() << "\n";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
