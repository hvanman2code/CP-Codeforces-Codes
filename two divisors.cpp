#include<bits/stdc++.h>
#include<numeric>


using namespace std;

// long long int GCDi(long long int a, long long int b){
//     while(a!=b){
//         if(a>b) a-=b;
//         else b-=a;

//     }

//     return a;
// }

int main(){
    int t=0;
    cin>>t;
    while(t--){
        long long int a,b,c;
        cin>>a>>b;
        if(b%a==0) c=b*(b/a);
        else c=b*a/__gcd(a,b);

        cout<<c<<endl;
    }



    return 0;
}