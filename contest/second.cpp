#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
#include<string.h>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        set<int> solve;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            solve.insert(a);
        }

        int ans=n-solve.size();
        cout<<ans<<endl;
     

    }

    return 0;
}