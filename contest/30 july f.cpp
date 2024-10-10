#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.size();
        bool f = 0;

        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                cout << s.substr(0, i + 1) << (s[i] == 'a' ? 'b' : 'a') << s.substr(i + 1) << endl;
                f = 1;
                break;
            }
        }

        if (!f) {
            cout << s;
            if(s[n-1]=='z') cout<<'a';
            else cout<<char(s[n-1]+1);
            cout<<endl;
        }
    }

    return 0;
}