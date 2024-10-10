#include<stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    int arr[n];
    double sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    double ans=sum/n;
    printf("%0.12lf",ans);

    return 0;

}