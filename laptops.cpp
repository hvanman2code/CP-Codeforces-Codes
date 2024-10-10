#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main(){
        int n=0;
        cin>>n;
        // Define a vector of pairs to store each row along with its index
        vector<pair<int, vector<int>>> arr(n);

    // Input elements into the array
   // cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        arr[i].second.resize(2);
        for (int j = 0; j < 2; ++j) {
            cin >> arr[i].second[j];
        }
        arr[i].first = arr[i].second[0]; // Store the value of the first column
    }

    // Sort the vector of pairs based on the first column
    sort(arr.begin(), arr.end());

    // Copy the sorted array back to a 2D array
    vector<vector<int>> sortedArray(n, vector<int>(2));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2; ++j) {
            sortedArray[i][j] = arr[i].second[j];
        }
    }
        int count=0;
        for(int j=0;j<n-1;j++){

                if(sortedArray[j][1]>sortedArray[j+1][1]) {
                        count++;
                        break;
                }
        }

        if(count) cout<<"Happy Alex";
        else cout<<"Poor Alex";


        return 0;
}