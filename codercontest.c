#include<stdio.h>

int main(){
    int t=0;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++){
        scanf("%d",&arr[i]);

    }
    int count=0,max=arr[0],min=arr[0];
    for(int i=1;i<t;i++){
        if(arr[i]>max){
            max=arr[i];
            count++;
        }
        if(arr[i]<min){
            min=arr[i];
            count++;
        }


    }
    printf("%d",count);

    return 0;
}