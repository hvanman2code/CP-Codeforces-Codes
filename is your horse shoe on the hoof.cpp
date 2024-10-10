#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[4];
    set<int> s;

    for(int i=0;i<4;i++){
        cin>>arr[i];
        s.insert(arr[i]);
    }

    //cout<<sizeof(s.begin())<<"    ";

    int ans=4-s.size();
    cout<<ans;

    return 0;
}