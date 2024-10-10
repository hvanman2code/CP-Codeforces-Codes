#include<stdio.h>
#include<string.h>
int main(){
    int n=0;
    scanf("%d",&n);
    char str[100];
    for(int i=0;i<n;i++){
        scanf("%s",str);
        int len=strlen(str);
        if(len>10) printf("%c%d%c\n",str[0],len-2,str[len-1]);
        else printf("%s\n",str);

    }
    return 0;
}