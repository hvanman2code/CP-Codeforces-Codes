#include<stdio.h>
int main(){
    int t=0;
    scanf("%d",&t);
    while(t--){
        int a=0,b=0,c=0;
        scanf("%d %d %d",&a,&b,&c);
        if(a==b+c || b==a+c || c==a+b) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}