#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;  
        cout<<'1';
        for(int i=1;i<n;i++){
            cout<<'0';
        }
        cout<<endl;
    }

    return 0;
}
