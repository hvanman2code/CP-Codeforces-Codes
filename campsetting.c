#include<stdio.h>
int main(){

    int t=0;
    scanf("%d",&t);
    while(t--){
        int ans=0,a=0,b=0,c=0;
        scanf("%d %d %d",&a,&b,&c);
        if(b%3==0 || (b%3 + c)>=3){
            ans=a+b/3+(b%3 + c)/3 + (((b%3 + c)%3)>0);
        }
        else ans=-1;
        printf("%d\n",ans);
    }
}