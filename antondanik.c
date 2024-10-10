#include<stdio.h>
int main(){
    int n=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",&s);
    int anton=0,danik=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A') anton++;
        else danik++;

    }
    if(anton>danik) printf("Anton");
    else if(danik>anton) printf("Danik");
    else printf("Friendship");
    return 0;
}