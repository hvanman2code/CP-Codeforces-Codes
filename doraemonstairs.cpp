#include <iostream>

using namespace std;

int main()
{
    int n = 0, m = 0;
    cin >> n >> m;
    int steps = 0;
    if (n < m)
        steps = -1;
    else
    {
        steps = (n + 1) / 2;
        for (; steps <= n; steps++)
        {
            if (steps % m == 0)
                break;
        }
    }
    cout << steps;

    return 0;
}