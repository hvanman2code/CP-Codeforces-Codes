#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    scanf("%s",s);
    if(s[0]>94) s[0]=s[0]-32;
    for(int i=0;i<strlen(s);i++){
        printf("%c",s[i]);
    }

    return 0;
}