#include<stdio.h>
int main(){
    int t=0;
    scanf("%d",&t);
    while(t--){
        int n=0,m=0,k=0,count=0;
        scanf("%d %d %d",&n,&m,&k);
        int b[n],c[m];
        for(int i=0;i<n;i++){
            scanf("%d",&b[i]);
        }
        for(int i=0;i<m;i++){
            scanf("%d",&c[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(b[i]+c[j]<=k) count++;
            }
        }
        printf("%d\n",count);

    }
    return 0;
}