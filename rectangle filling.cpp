#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main(){
        int t=0;
        cin>>t;
        while(t--){
                int n=0,m=0;
        cin>>n>>m;
        char arr[n][m];
        for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                        cin>>arr[i][j];
                }
        }
        int bw=0,bb=0;
        for(int i=0;i<n;i++){
                if(arr[i][0]=='W') {
                        bw++;
                        break;
                }
        }
        for(int i=0;i<n;i++){
                if(arr[i][0]=='B') {
                        bb++;
                        break;
                }
        }
        for(int i=0;i<n;i++){
                if(arr[i][m-1]=='W') {
                        bw++;
                        break;
                }
        }
        for(int i=0;i<n;i++){
                if(arr[i][m-1]=='B') {
                        bb++;
                        break;
                }
        }
        for(int i=0;i<m;i++){
                if(arr[0][i]=='W') {
                        bw++;
                        break;
                }
        }
        for(int i=0;i<m;i++){
                if(arr[0][i]=='B') {
                        bb++;
                        break;
                }
        }
        for(int i=0;i<m;i++){
                if(arr[n-1][i]=='W') {
                        bw++;
                        break;
                }
        }
        for(int i=0;i<m;i++){
                if(arr[n-1][i]=='B') {
                        bb++;
                        break;
                }
        }
        int cnt=0;
        if(arr[0][0]==arr[n-1][m-1] || arr[0][m-1]==arr[n-1][0] ) cout<<"YES";
        
        else {
                if(arr[0][0]==arr[0][m-1]){
                char ch=arr[0][0];
                 cnt=0;
                for(int i=0;i<m;i++){
                        if(arr[n-1][i]==ch) {
                                cnt++;
                                break;
                        }
                }
                
        }
        if(arr[n-1][0]==arr[n-1][m-1]){
                char ch=arr[n-1][0];
                 cnt=0;
                for(int i=0;i<m;i++){
                        if(arr[0][i]==ch) {
                                cnt++;
                                break;
                        }
                }
                
        }
        if(arr[n-1][0]==arr[0][0]){
                char ch=arr[n-1][0];
                 cnt=0;
                for(int i=0;i<n;i++){
                        if(arr[i][m-1]==ch) {
                                cnt++;
                                break;
                        }
                }
                
        }
        if(arr[n-1][m-1]==arr[0][m-1]){
                char ch=arr[n-1][m-1];
                 cnt=0;
                for(int i=0;i<n;i++){
                        if(arr[i][0]==ch) {
                                cnt++;
                                break;
                        }
                }
                
        }
        if(cnt || bw==4 || bb==4) cout<<"YES";
        else cout<<"NO";
        }
        cout<<endl;
        }



        return 0;
}