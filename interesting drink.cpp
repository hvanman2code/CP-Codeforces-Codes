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
        
        while(q--){
                if(n==1){
                        int a=0;
                        cin>>a;
                        if(a>=arr[0]) cout<<1<<endl;
                        else cout<<0<<endl;
                }
                else {
                        int i=0,f=n-1 ;
                int a=0, mid=i + (f-i)/2  ;
                cin>>a;

                int idx=-1;
                while(i<f){
                        mid=i + (f-i)/2;
                        if(arr[mid]>a) f=mid-1;
                        else if (arr[mid]<a){
                                idx=mid;
                                 i=mid+1;
                                 if(arr[mid+1]<=a) idx=mid+1;
                        }
                        else {
                                idx=mid;
                                i=mid+1;
                        }
                }

                cout<<idx+1<<endl;
                }

                

        }

        return 0;
}