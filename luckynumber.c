#include<stdio.h>
int main(){
    int n=0;
    scanf("%d",&n);
    int lc=0;
    for(int i=0;n>0;i++){
        int r=n%10;
        n=n/10;
        if(r==4 || r==7) lc++;

    }
    if(lc==4 || lc==7) printf("YES");
    else printf("NO");

    return 0;
}