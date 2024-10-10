#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t = 0;
    cin >> t;
    while (t--)
    {
        string b;
        cin >> b;
        int ls, f1, f0 = 0, no = 0, cost = 0;
        ls = b.length();
        f1 = ls;
        for (int i = 0; i < ls; i++)
        {
            if (b[i] == '1')
                f1 = min(f1, i);
            if (i > f1 && b[i] == '0')
                no++;
        }

        for (int i = f1; i < ls; i++)
        {
            if (b[i] == '0')
            {
                cost += i - f1 + 1;
                f1++;
                b[i] = '1';
            }
        }

        cout << cost << endl;
    }
}