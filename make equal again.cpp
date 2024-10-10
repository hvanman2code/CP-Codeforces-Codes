#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
        int t=0;
        cin>>t;
        while(t--){
                int n=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
                cin>>a[i];
        }
    
        int l=1,r=1;
		while(l<n&&a[l-1]==a[l])l++;
		while(r<n&&a[n-r-1]==a[n-r])r++;
		if(a[0]==a[n-1])cout<<max(0,n-l-r)<<endl;
		else cout<<n-max(l,r)<<endl;
        
        }
        return 0;
}
