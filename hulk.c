#include<stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i%2==0) printf("I hate ");
        else printf("I love ");
        if(i==n-1) printf("it");
        else printf("that ");
    }
    return 0;
}