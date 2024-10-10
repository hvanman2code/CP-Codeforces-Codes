#include<bits/stdc++.h>

using namespace std;

int main(){
    int n=0;
    cin>>n;
    int a[n],b[n];
    int duplicate=0;
    for(int i=0;i<<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                duplicate++;
                if(duplicate==1){
                    if(b[i]==2||b[i]==3) b[j]=b[j]-1;
                    else{
                        b[i]=1;
                        b[j]=2;
                     }
                
                }
            }

        }
    }


    return 0;
}