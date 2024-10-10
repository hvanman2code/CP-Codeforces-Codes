#include<stdio.h>
int main(){
    int n=0;
    scanf("%d",&n);
    int st=n/5;
    if(n%5!=0) st++;
    printf("%d",st);


    return 0;
}