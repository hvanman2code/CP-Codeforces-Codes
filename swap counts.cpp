#include <iostream>
#include <vector>
using namespace std;

// Function to compute Bob's position at time ti
long long computeBobPosition(long long c1, long long d1, long long c2, long long d2, long long ti) {
    long long alice_position = 1; // Starting position of Alice
    long long bob_position = 0;    // Starting position of Bob

    long long total_time = 0; // Total elapsed time

    while (total_time < ti) {
        // Calculate Alice's movement
        long long alice_move_time = min(c1, ti - total_time); // Time Alice can move
        alice_position += alice_move_time; // Update Alice's position
        total_time += alice_move_time; // Update total time

        // Check if Bob can move
        if (alice_position >= bob_position + 2) {
            long long bob_move_time = min(c2, ti - total_time); // Time Bob can move
            bob_position += bob_move_time; // Update Bob's position
            total_time += bob_move_time; // Update total time
        }

        // Charging periods
        if (total_time < ti) {
            // Charge Alice's phone
            total_time += d1; // Add charging time for Alice
        }
        
        if (total_time < ti) {
            // Charge Bob's phone
            total_time += d2; // Add charging time for Bob
        }
    }

    return bob_position; // Return Bob's final position after time ti
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long c1, d1, c2, d2, n;
        cin >> c1 >> d1 >> c2 >> d2 >> n;

        vector<long long> queries(n);
        for (long long &ti : queries) {
            cin >> ti;
        }

        // Process each query
        for (long long ti : queries) {
            cout << computeBobPosition(c1, d1, c2, d2, ti) << '\n';
        }
    }

    return 0;
}
