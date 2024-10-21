/*
        Author :: Hvanman2code


        "Do You Know How It Works B'coz I Don't"

*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int sm = 0;
        int l = n + 1, r = -1;
        for(int i = 0; i < n; i++){
            int k;
            cin >> k;
            sm += k;
            if(k % x != 0) {
                l = min(l, i);
                r = max(r, i);
            }
        }
        if(sm % x != 0)cout << n << endl;
        else cout << (r == -1 ? r : n - min(n - r, l + 1)) << endl;
    }


    return 0;
}