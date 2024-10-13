#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    
    long long tc = 1LL * a * b;  

    for (int i = 1; i <= 9; ++i) {
        long long tr = ceil(i * 0.1 * tc);  
        cout << tr << " ";
    }
    cout<<endl;
    
    return 0;
}
