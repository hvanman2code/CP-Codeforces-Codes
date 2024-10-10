#include <iostream>
#include <vector>
using namespace std;

class UnionFind {
public:
    UnionFind(int size) {
        parent.resize(size);
        for (int i = 0; i < size; ++i)
            parent[i] = i;
    }

    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]); // Path compression
        return parent[x];
    }

    void unionSets(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            parent[rootY] = rootX; // Union
        }
    }

private:
    vector<int> parent;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        UnionFind uf(n + 1); // Union-Find for points 1 to n

        for (int i = 0; i < m; i++) {
            long long a, d, k;
            cin >> a >> d >> k;

            // Connect points in the sequence
            for (int j = 0; j < k; j++) {
                int currentPoint = a + j * d;
                if (j > 0) {
                    uf.unionSets(currentPoint, a + (j - 1) * d); // Connect to the previous point
                }
            }
        }

        // Count unique components
        vector<bool> seen(n + 1, false);
        int components = 0;
        for (int i = 1; i <= n; i++) {
            if (uf.find(i) == i && !seen[i]) {
                components++;
                seen[i] = true; // Mark the component as seen
            }
        }

        cout << components << "\n";
    }

    return 0;
}
