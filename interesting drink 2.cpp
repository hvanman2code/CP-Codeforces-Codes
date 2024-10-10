#include<bits/stdc++.h>

using namespace std;

int main(){
        int n=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
                cin>>arr[i];
        }
        sort(arr,arr+n);
        int q=0;
        cin>>q;
         int a=0,b=0;
         int count=0;
        while(q--){              
                cin>>a;
                if(a>=arr[n-1]) count=n;
                else {
                        if(a>b){
                        for(int i=count;i<n;i++){
                                if(arr[i]<=a) count++;
                                else break;
                        }
                }
                else if(a<b){
                        count=0;
                        for(int i=0;i<n;i++){
                                if(arr[i]<=a) count++;
                                else break;
                        }
                }
                }
                b=a;
                cout<<count<<endl;
        }
        

        return 0;
}