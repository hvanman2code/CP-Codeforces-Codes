
#include <bits/stdc++.h>

using namespace std;


const int inf = 5;

int n, i, x, k, ans, sl;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        for (cin >> n >> k, ans = inf, sl = 0, i = 1; i <= n; ++i)
        {
            cin >> x;
            int y = x % k;
            ans = min(ans, y == 0 ? 0 : k - y);
            if (x % 2 == 0)  sl++;
        }
        if (k == 4)
            ans = min(max(0, 2 - sl), ans);

        cout << ans << endl;
    }

    return 0;
}



