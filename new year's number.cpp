#include<bits/stdc++.h>
// #include<iostream>

// using namespace std;

// int main(){
//     int t=0;
//     cin>>t;
//     while(t--){
//         int n=0;
//         cin>>n;
//         int ld=(n/1000)/2;
//         if(n<2020){
//             cout<<"NO\n";

//         }
    
//         else{
//             if(((n%100)/(n/100))==1 && ld>= n%10 && n/1000==(n/10)%10) cout<<"YES\n";
//             else cout<<"NO\n";
//         }
//         }

//     return 0;
// }



#include<iostream>
using namespace std;
int main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		n%2020<=n/2020 ? cout<<"YES\n" : cout<<"NO\n";
	}
}