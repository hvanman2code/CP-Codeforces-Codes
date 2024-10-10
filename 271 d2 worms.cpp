#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> arr(n+1);
    //int arr[n+1];
    arr[0]=0;
    int x;
    for(int i=1;i<=n;i++){
        cin>>x;
        arr[i]=arr[i-1]+x;
    }
    int q;
    cin>>q;
    while(q--){
        cin>>x;
        auto it=lower_bound(arr.begin(),arr.end(),x);
        int ans=it-arr.begin();
        cout<<ans<<'\n';
    }


    return 0;
}