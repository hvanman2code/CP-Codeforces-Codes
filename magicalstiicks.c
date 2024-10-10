#include<stdio.h>

int main(){
    int t=0;
    scanf("%d",&t);
    while(t--){
        int n=0;
        scanf("%d",&n);
        int ans=(n+1)/2;
        printf("%d\n",ans);
    }
    return 0;
}