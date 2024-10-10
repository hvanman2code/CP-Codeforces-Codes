#include<bits/stdc++.h>

#define ll long long int;
#define tia(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define atv(v,e) v.push_back(e);
#define ats(s,e) s.insert(e);
#define yes cout<<"YES\n";
#define no cout<<"NO\n";


using namespace std;



int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,k=0;
        cin>>n>>k;
        
        char arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<n;){
            for(int j=0;j<n;){
                cout<<arr[i][j];
                j+=k;
        }
        cout<<endl;
        i+=k;
        }


        
        
    }

    return 0;
}