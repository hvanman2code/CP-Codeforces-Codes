/*
        Author :: Hvanman2code

*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {
    fast;

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vi a(n + 1);  
        map<int, pair<int, int>, greater<int>> mp;
        mp[n] = {1, n};  // Initialize with the full range [1, n]

        for (int i = 1; i <= n; ++i) {
            auto it = mp.begin();  // Get the largest interval
            int len = it->first;   // Length of the interval
            int left = it->second.first;
            int right = it->second.second;
             // Remove the interval from the map
            
            int mid;
            if (len % 2 == 1) {
                mid = (left + right) / 2;
            } else {
                mid = (left + right - 1) / 2;
            }
            
            a[mid] = i;  // Assign the current number i to the midpoint
            
            // Add the left and right segments back to the map if they are non-empty
            if (left <= mid - 1) {
                mp[mid - left] = {left, mid - 1};
            }
            if (mid + 1 <= right) {
                mp[right - mid] = {mid + 1, right};
            }
            mp.erase(it); 
        }
        
        
        for (int i = 1; i <= n; ++i) {
            cout << a[i] << ' ';
        }
        cout << endl;
    }

    return 0;
}
