#include<stdio.h>
int main(){
    int t=0;
    scanf("%d",&t);
    while(t--){
        int a=0,b=0;
        scanf("%d %d",&a,&b);
        int ans=0;
        if(a%b==0) ans=0;
        else{
            ans=b*((a/b)+1)-a;
        }
        printf("%d\n",ans);


    }
    return 0;
}