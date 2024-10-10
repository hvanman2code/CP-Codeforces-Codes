#include<stdio.h>

int main(){
    int t=0;
    scanf("%d",&t);
    while(t--){
        int n=0;
        scanf("%d",&n);
        int arr[n];
        int count=0;
        for(int i=0;i<n;i++){

            scanf("%d",&arr[i]);

        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]-arr[j]==1 || arr[i]-arr[j]==-1) count++;
            }
        }
        if(count>n-2) printf("YES\n");
        else printf("NO\n");

    }

    return 0;
}