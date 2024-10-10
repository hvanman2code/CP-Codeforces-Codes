#include<stdio.h>

int main(){
    int t=0;
    scanf("%d",&t);
    while(t--){
        int a=0,b=0,c=0,d=0,count=0;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(b>a) count++;
        if(c>a) count++;
        if(d>a) count++;
        printf("%d\n",count);
    }

}