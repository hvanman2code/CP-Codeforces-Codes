#include<stdio.h>

int main(){
    int k=0,r=0,i=0,count=0;
    scanf("%d %d",&k,&r);
    for(i=1;i<10;i++){
        if((k*i)%10==r || (k*i)%10==0){
            count++;
            break;
        }
    }
    if(count==1){
        printf("%d",i);
    }
    else printf("%d",10);
    return 0;
}