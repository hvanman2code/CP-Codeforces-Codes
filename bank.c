#include<stdio.h>
int main(){
    int n=0;
    scanf("%d",&n);
    int count=0;
    
    int r1=n/100;
    n-=r1*100;
    int r2=n/20;
    n-=r2*20;
    int r3=n/10;
    n-=r3*10;
    int r4=n/5;
    n-=r4*5;
    count=r1+r2+r3+r4+n;
        

    printf("%d",count);

    return 0;
}