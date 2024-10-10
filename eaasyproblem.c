#include<stdio.h>
int main(){
    int n=0;
    scanf("%d",&n);
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==1) count++;

    }
    if(count==0) printf("EASY");
    else printf("HARD");

    return 0;

}