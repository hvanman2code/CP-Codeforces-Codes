#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int si = 0, ei = 0, sum = 0, md = 0;
    for (int i = 0; ei < n && si < n; i++)
    {
        if (sum + arr[ei] <= t)
        {
            sum += arr[ei];
            md = max(md, ei - si + 1);
            ei++;
        }
        else
        {
            sum -= arr[si];
            sum = max(sum, 0);
            si++;
            md = max(md, ei - si + 1);
        }

        ei = max(ei, si);
    }

    cout << md;

    return 0;
}