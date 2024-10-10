#include<bits/stdc++.h>
#include<algorithm>


using namespace std;

int main(){     
        int s=0,n=0;
        cin>>s>>n;
        int arr[n][2];
        for(int i=0;i<n;i++){
                for(int j=0;j<2;j++){
                        cin>>arr[i][j];
                }
        }
        for(int i=0;i<n-1;i++){
                for(int j=0;j<n-1;j++){
                        if(arr[j][0]>arr[j+1][0]) {
                                int temp=arr[j][0];
                                arr[j][0]=arr[j+1][0];
                                arr[j+1][0]=temp;
                                temp=arr[j][1];
                                arr[j][1]=arr[j+1][1];
                                arr[j+1][1]=temp;
                                
                        }
                }
                
        }

        int cp=s;
        int lost=0;
        for(int i=0;i<n;i++){
                if(cp>arr[i][0]) cp+=arr[i][1];
                else {
                        lost++;
                        break;
                }
        }
        if(lost>0) cout<<"NO";
        else cout<<"YES";
        
        
        return 0;
}