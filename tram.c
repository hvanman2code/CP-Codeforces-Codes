#include<stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    int a=0,b=0,cp=0,mp=0;
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        cp-=a;
        cp+=b;
        if(cp>mp) mp=cp;


    }
    printf("%d",mp);


    return 0;
}