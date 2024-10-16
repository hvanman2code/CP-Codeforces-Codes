/*    
    Author:: Hvanman2code

*/

#include<bits/stdc++.h>

using namespace std;



int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n,x; 
    cin>>n;
    vector<int> a(n+1),b(n+1);
    for (int i= 0; i<n; i++) cin>>x,a[x]= i+1; 
 
    for (int i= 0; i<n; i++) cin>>x,b[x]= i+1;
    
    vector<int> res(n, 0);
    int ans= 0;
    for (int i= 1, diff; i<n+1; i++) {
        if (b[i]>= a[i]) diff= b[i]- a[i];
        else diff= n-(a[i]-b[i]);
        ans= max(ans, ++res[diff]);
    }
    cout<<ans<<endl;

    return 0;
}