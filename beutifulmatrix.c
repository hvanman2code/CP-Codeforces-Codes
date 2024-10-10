#include<stdio.h>
int main(){
    int arr[5][5];
    int a=0,b=0,moves=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
            if (arr[i][j]==1) {
                a=i;
                b=j;
            }
        }
    }
    if(a>2) moves+=(a-2);
    else moves+=(2-a);
    if(b>2) moves+=(b-2);
    else moves+=(2-b);
    printf("%d",moves);
    

    return 0;
}