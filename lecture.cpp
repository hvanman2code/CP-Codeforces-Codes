#include<bits/stdc++.h>

using namespace std;

int main(){
        int n=0,m=0;
        cin>>n>>m;
        string arr[m][3];
        for(int i=0;i<m;i++){
                cin>>arr[i][0]>>arr[i][1];
                arr[i][2]=(arr[i][0].length()<=arr[i][1].length()? arr[i][0]:arr[i][1]);
        }
        for(int t=0;t<n;t++){
                string s;
                cin>>s;
                for(int i=0;i<n;i++){
                        if(s==arr[i][0]) cout<<arr[i][2]<<" ";
                }
        }

        

        return 0;
}