#include<stdio.h>
int main(){
    int k=0,l=0,m=0,n=0,d=0;
    scanf("%d\n",&k);
    scanf("%d\n",&l);
    scanf("%d\n",&m);
    scanf("%d\n",&n);
    scanf("%d",&d);
    int harm=0;
    for(int i=1;i<=d;i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0) harm++;

    }
    printf("%d",harm);
    return 0;
}