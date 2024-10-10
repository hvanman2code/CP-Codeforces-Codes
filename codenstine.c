#include<stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    int arr[n],sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    if(sum==14) printf("YES");
    else printf("NO");


    return 0;
}