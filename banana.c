#include<stdio.h>
int main(){
    int k=0,n=0,w=0;
    scanf("%d %d %d",&k,&n,&w);
    int m=(k*w*(w+1)/2)-n;
    if(m>=0) printf("%d",m);
    else printf("%d",0);
    return 0;
}