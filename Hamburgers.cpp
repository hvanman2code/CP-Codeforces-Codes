/*
        Author :: Hvanman2code
*/

#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
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


unordered_map<char, int> hmb, av, pr;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    cin >> av['B'] >> av['S'] >> av['C'];
    cin >> pr['B'] >> pr['S'] >> pr['C'];
    ll bal;
    cin >> bal;

    
    for (char c : s) {
        hmb[c]++;
    }

    ll low = 0, high = 1e13, result = 0;
    
    while (low <= high) {
        ll mid = (low + high) / 2;

        ll cost = max(0LL, (mid * hmb['B'] - av['B'])) * pr['B'] 
                + max(0LL, (mid * hmb['S'] - av['S'])) * pr['S'] 
                + max(0LL, (mid * hmb['C'] - av['C'])) * pr['C'];

        if (cost <= bal) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << result << endl;
    
    return 0;
}

