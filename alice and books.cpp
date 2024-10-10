#include<bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while (t--)
    {
        int n=0;
        cin>>n;
        int last,mix=0,arr[n-1];
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
            mix=max(mix,arr[i]);
        }
        cin>>last;
        cout<<mix+last<<endl;
        
    }
    

    return 0;
}