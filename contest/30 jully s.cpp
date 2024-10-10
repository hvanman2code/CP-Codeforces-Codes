#include <iostream>
#include <vector>
#include <string>

using namespace std;

void dfs(vector<string>& g, vector<vector<int>>& vst, int r, int c) {
    if (r < 0 || r >= 2 || c < 0 || c >= g[0].size() || vst[r][c] || g[r][c] == 'x') {
        return;
    }

    vst[r][c] = 1;

    dfs(g, vst, r - 1, c);
    dfs(g, vst, r + 1, c);
    dfs(g, vst, r, c - 1);
    dfs(g, vst, r, c + 1);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> grid(2);
        cin >> grid[0] >> grid[1];

        int count = 0;

        for (int r = 0; r < 2; r++) {
            for (int c = 0; c < n; c++) {
                if (grid[r][c] == '.') {
                    grid[r][c] = 'x';

                    vector<vector<int>> visited(2, vector<int>(n, 0));
                    int regions = 0;

                    for (int r2 = 0; r2 < 2; r2++) {
                        for (int c2 = 0; c2 < n; c2++) {
                            if (!visited[r2][c2] && grid[r2][c2] == '.') {
                                dfs(grid, visited, r2, c2);
                                regions++;
                            }
                        }
                    }

                    if (regions == 3) {
                        count++;
                    }

                    grid[r][c] = '.';
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}