#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int n=strlen(str);
    int d=1;
    for(int i=1;i<n-1;i++){
        if(str[i-1]==str[i]) d++;
        else d=1;
        if(d==7) break;
    }
    if(d==7) printf("YES");
    else printf("NO");
    return 0;
}