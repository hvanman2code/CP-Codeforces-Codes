#include<bits/stdc++.h>

using namespace std;

int main(){
        int t=0;
        cin>>t;
        while(t--){
                int n=0;
                cin>>n;
                char arr[n];
                cin>>arr;
                int cmap=0,cpie=0;
                int i=0;
                while(i<n-2){
                if(arr[i]=='p' && arr[i+1]=='i' && arr[i+2]=='e') {
                        cpie++;
                        i+=3;
                }
                else if (arr[i]=='m' && arr[i+1]=='a' && arr[i+2]=='p'){
                                cmap++;
                                i+=3;
                }
                else i++;
                }
                cout<<cmap+cpie<<endl;
        }


        return 0;
}