#include<stdio.h>

int main(){
    int t=0;
    scanf("%d",&t);
    while(t--){
        int a=0,b=0;
        scanf("%d %d",&a,&b);
        int ans=0;
        if(a>b) ans=(a-b+9)/10;
        else ans=(b-a+9)/10;
        printf("%d\n",ans);
        
    }
    
    return 0;
}