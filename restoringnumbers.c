#include<stdio.h>

int main(){
    int m=0,n=0,p=0,q=0;
    scanf("%d %d %d %d",&m,&n,&p,&q);
    if(m>n && m>p && m>q) {
        printf("%d %d %d",m-n,m-p,m-q);
    }
    else if(n>m && n>p && n>q) {
        printf("%d %d %d",n-m,n-p,n-q);
    }
    else if(p>m && p>n && p>q) {
        printf("%d %d %d",p-m,p-n,p-q);
    }
    else if(q>m && q>p && q>n) {
        printf("%d %d %d",q-m,q-p,q-n);
    }

    return 0;
}