#include<stdio.h>
int main(){
    int n=0;
    scanf("%d",&n);
    int arr[n][2];
    int count=0;

    for (int i = 0; i <n; i++)
    {
        for(int j=0;j<2;j++){
            scanf("%d",&arr[i][j]);

        }
    }
    for (int i = 0; i <n; i++)
    {
        if((arr[i][1]-arr[i][0])>=2) count++;
    }
    printf("%d",count);
    

    return 0;

}