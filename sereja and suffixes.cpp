#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main(){
        int n=0,m=0;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++){
                cin>>arr[i];
        }
        int ans[n];
        set<int> s;
        for(int i=n-1;i>=0;i--){
                s.insert(arr[i]);
                ans[i]=s.size();
        }
        while(m--){
                
                int a=0;
                cin>>a;
                cout<<ans[a-1]<<endl;
        }

        return 0;
}