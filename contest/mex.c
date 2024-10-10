#include<stdio.h>
#include<string.h>

int main(){
    int t=0;
    scanf("%d",&t);
    while(t--){
        int n=0;
        scanf("%d",&n);
        int arr[n];
        for (int i = 0; i <n; i++)
        {
            scanf("%d",&arr[i]);
        }
        int mex=0;

        for(int i=0;i<n;i++){
            int count=mex;
            for(int j=0;j<n;j++){
                if(arr[j]==mex){
                    mex++;
                    break;
                }
            }
            if(count==mex) break;
        }
        printf("%d\n",mex);
        
    }

    return 0;
}