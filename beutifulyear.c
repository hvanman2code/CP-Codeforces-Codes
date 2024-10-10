#include<stdio.h>

int main(){
    int n=1987;
    scanf("%d",&n);
    int ans=0;
    for(int i=n+1;i<9000;i++){
        // printf("%d  ",i);
        int d1=i%10;
        int d2,d3;
        if((i%100)/10==0) d2=0;
        else d2=(i%100)/10;
        if((i%1000)/100==0) d3=0;
        else d3=(i%1000)/100;
        int d4=i/1000;
        if(d1!=d2 && d1!=d3 && d1!=d4 && d2!=d3 && d2!=d4 && d3!=d4){
            ans=i;
            break;
        }

    }
    printf("%d",ans);
    
    
    return 0;
}