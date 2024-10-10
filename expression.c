#include<stdio.h>
int max(int a,int b){
    if (a>b) return a;
    return b;
}
int main(){
    int a=0;
    int b=0,c=0;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%d",&c);
    int a1=0;
    a1=max(a+b+c,a*b*c);
    a1=max(a1,(a+b)*c);
    a1=max(a1,a*(b+c));
    printf("%d",a1);
    return 0;
}