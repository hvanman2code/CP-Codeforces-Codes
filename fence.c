#include<stdio.h>
int main(){
    int n=0,h=0;
    scanf("%d %d",&n,&h);
    int a=0,tw=0;
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&a);
        if(a<=h) tw+=1;
        else tw+=2;

    }
    printf("%d",tw);
    


    return 0;

}