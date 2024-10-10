#include<stdio.h>

int max(int n,int a[]){
    int index=0;
    for(int i=1;i<n;i++){
        if(a[i]>a[index]) index=i;
    }

    return index;

}
int min(int n,int a[]){
    int index=0;
    for(int i=1;i<n;i++){
        if(a[i]<a[index]) index=i;
    }

    return index;

}


int main(){
    int t=0;
    scanf("%d",&t);
    while (t--)
    {
        int n=0;
        scanf("%d",&n);
        int arr[n];
        int count=0;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);

        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]!=arr[j] && arr[i]<arr[i+1]){
                    int mini=min(n,arr);
                    int maxi=max(n,arr);
                    arr[maxi]--;
                    arr[mini]++;
                    j--;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]!=arr[j]){
                    count++;
                    break;
                }
            }
        }
         if(count==0) printf("YES\n");
         else printf("NO\n");

    }
    

    return 0;

}