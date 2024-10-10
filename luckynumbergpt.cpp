#include <iostream>
#include <string>

using namespace std;

int main() {
    string number;
    cin >> number;

    int lucky_count = 0;
    for (char digit : number) {
        if (digit == '4' || digit == '7') {
            lucky_count++;
        }
    }

    if (lucky_count == 4 || lucky_count == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}