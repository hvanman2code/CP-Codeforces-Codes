#include<stdio.h>
int main(){
    int n=0,m=0;
    scanf("%d %d",&n,&m);
    int i;
    for(i=0;n<=m;i++){
        n+=2*n;
        m+=m;
    }
    printf("%d",i);

    return 0;
}