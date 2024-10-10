#include<stdio.h>
int main(){
    int n=0,i=0,k=0;
    scanf("%d %d",&n,&k);
    for(i=0;k<=240-5*i;i++){
        k+=5*(i+1);

    }
    if(i<n) printf("%d",i);
    else printf("%d",n);

    return 0;
}