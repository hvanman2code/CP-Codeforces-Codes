#include<stdio.h>
int main(){
    int n=0;
    scanf("%d\n",&n);
    char str[n];
    gets(str);

    int trm=0;
    for(int j=0;j<n-1;j++){
        if(str[j]==str[j+1]) trm++;
    }
    printf("%d",trm);
    

    return 0;
}