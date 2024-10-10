#include<stdio.h>
int main(){
    int t=0;
    scanf("%d",&t);
    while(t--){
        int n=0;
        scanf("%d",&n);
        // int a=n-1,b=1;
        // int count=0;
        // while (a>b)
        // {
        //     count++;
        //     a--;
        //     b++;
        // }
        int count=(n-1)/2;
        printf("%d\n",count);

    }
    
    return 0;
}