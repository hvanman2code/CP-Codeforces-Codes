#include<stdio.h>
int maxi(int n,int arr[]){
    int index=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[index]) index=i;
    }
    return index;

}
int mini(int n,int arr[]){
    int index=n-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[index]) index=i;
    }
    return index;

}

int main(){
    int n=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int max=maxi(n,arr);
    int min=mini(n,arr);
    int ans=0;
    if(max>min){
        ans+=max;
        min++;
        ans+=n-1-min;
    }
    else{
        ans+=max;
        ans+=n-1-min;
    }
    printf("%d",ans);


    return 0;
}