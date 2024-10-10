#include<stdio.h>
#include<string.h>
int main(){
    char a1[100],a2[100],ans[100];
    gets(a1);
    gets(a2);
    double size=0;
    int i=0;
    while(a1[i]!='\0'){
        size++;
        i++;

    }
    for(int i=0;i<size;i++){
        if(a1[i] != a2[i]) ans[i]='1';
        else ans[i]='0';
    }
    for(int i=0;i<size;i++){
        printf("%c",ans[i]);
    }
    
    


    return 0;

}