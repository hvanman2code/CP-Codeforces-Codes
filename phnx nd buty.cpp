#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        set<int> unique_elements;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            unique_elements.insert(a[i]);
        }
        
        if (unique_elements.size() > k) {
            cout << -1 << endl;
        } else {
            vector<int> pattern(unique_elements.begin(), unique_elements.end());
            // Fill the pattern to have exactly k elements
            while (pattern.size() < k) {
                pattern.push_back(1); // Add any element, 1 is a valid choice
            }

            // Repeat the pattern to get an array of at least length n
            cout<<pattern.size()*n<<endl;
            
            
            for (int i = 0; i <n; i++) {
                for(int j=0;j<pattern.size();j++){
                    cout<<pattern[j]<<" ";

                }
            }
            cout << endl;
        }
    }
    return 0;
}
