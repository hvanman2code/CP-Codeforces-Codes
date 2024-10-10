#include<bits/stdc++.h>

using namespace std;

int main(){
        int t=0;
        cin>>t;
        while(t--){
                int n=0;
        cin>>n;
        set<int> tru;
        int arr[n];
        int min=2;
        int sum=0;
        int cmt=0;
        int cmtb=0;
        for(int i=0;i<n;i++){
                
                cin>>arr[i];
                if(arr[i]<min) min=arr[i];
                tru.insert(arr[i]);
                
        }
        sort(arr,arr+n);

        for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]>1){
                if(cmt=1) cmt=0;
                else cmt=1;
        }

                
        }
        if(tru.size()%2==0 && min==1 && cmt==0) cout<<"Bob";
        else cout<<"Alice";
        cout<<endl;
        }

        return 0;
}