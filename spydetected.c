#include<stdio.h>
int main(){
    int t=0;
    scanf("%d",&t);
    while(t--){
        int n=0;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int e;
        if(arr[0]!=arr[1]){
            if(arr[0]==arr[2]) {
                e=arr[1];
                printf("%d\n",2);
            }
            if(arr[1]==arr[2]) {
                e=arr[0];
                printf("%d\n",1);
            }
        }
        else{
            e=arr[0];
            int index;
            for(int i=0;i<n;i++){
                if(arr[i]!=e) {
                    index=i+1;
                    break;
                }
            }
            printf("%d\n",index);
        }
        

    }

    return 0;
}