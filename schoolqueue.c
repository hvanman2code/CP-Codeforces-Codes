#include<string.h>

int main(){
    int n=0,T=0,t=0;
    scanf("%d %d",&n,&T);
    char arr[n];
    for(int i=0;i<=n;i++){
        scanf("%c",&arr[i]);
    }
    for(int i=0;i<T;i++){
        for(t=0;t<n && t!=n;t++){
            if(arr[t]=='B' && arr[t+1]=='G'){
                arr[t]='G';
                arr[t+1]='B';
                t++;
            }

        }


    }
    for(int j=0;j<=n;j++){
        printf("%c",arr[j]);
    }

    return 0;
}