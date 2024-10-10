#include<stdio.h>
#include<string.h>
int main(){
    char word[100];
    gets(word);
    int n=strlen(word);
    int upper=0,lower=0;
    for(int i=0;i<n;i++){
        int a=word[i];
        if(a<95) upper++;
        else lower++; 
    }
    if(upper>lower){
        for(int j=0;j<n;j++){
            int b=word[j];
            if(b>95) word[j]=b-32;
        }
    }
    else {
        for(int j=0;j<n;j++){
            int b=word[j];
            if(b<95) word[j]=b+32;
        }
    }
    puts(word);
    return 0;
}