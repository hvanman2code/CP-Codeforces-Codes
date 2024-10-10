#include <bits/stdc++.h>
using namespace std;

string StringSort(const string &s) {
    string sorted_str = s;
    sort(sorted_str.begin(), sorted_str.end());
    return sorted_str;
}

int totalDifferentCharacters(const std::string& str1, const std::string& str2) {
    std::unordered_set<char> set1(str1.begin(), str1.end());
    std::unordered_set<char> set2(str2.begin(), str2.end());

    int totalDiff = 0;
    for (auto  &c : set1) {
        if (set2.find(c) != set2.end()) {
            totalDiff++;
            
            

        }
    }
    for (char c : set2) {
        if (set1.find(c) == set1.end()) {
            totalDiff++;
        }
    }

    return totalDiff;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;

        while (q--) {
            int st, en;
            cin >> st >> en;

            // Extract substrings from a and b
            string t1 = a.substr(st - 1, en - st + 1);
            string t2 = b.substr(st - 1, en - st + 1);

            // Debug: Print the extracted substrings
            cout << "Extracted t1: " << t1 << ", Extracted t2: " << t2 << endl;

            // Sort the substrings
            string st1 = StringSort(t1);
            string st2 = StringSort(t2);

            // Debug: Print the sorted substrings
            cout << "Sorted st1: " << st1 << ", Sorted st2: " << st2 << endl;

            // Count the differences between sorted substrings
            int cnt = 0;
            for (int k = 0; k < en - st + 1; k++) {
                if (st1[k] != st2[k]) {
                    cnt++;
                }
            }

            cout << cnt << endl;
        }
    }
    return 0;
}
