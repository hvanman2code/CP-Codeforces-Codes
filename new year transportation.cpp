#include<bits/stdc++.h>

using namespace std;

int main(){
        int n=0,t=0;
        cin>>n>>t;
        int arr[n]={0};
        for(int i=0;i<n-1;i++){
                int a=0;
                cin>>a;
                arr[i]=a+i+1;
        }
        int count=0,idx=0;
        for(int i=0;i<t;i++){
                if(arr[i]==t) {
                        count++;
                        idx=i;
                        break;

                }
        }
        if(count) cout<<"YES\n";
        else cout<<"NO\n";


        return 0;
}