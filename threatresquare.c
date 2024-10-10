#include<stdio.h>
int main(){
    int n=0,m=0,a=0;
    scanf("%d %d %d",&n,&m,&a);
    int ans=0;
    int n1=n,m1=m,a1=a,i;
    for(i=0;n1>a || m1>a;i++){
        n1-=a;
        m1-=a;
        }
    ans=i+1;
    printf("%d",ans);

    return 0;

}