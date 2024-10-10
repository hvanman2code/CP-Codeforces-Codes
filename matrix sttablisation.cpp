#include<bits/stdc++.h>

using namespace std;

long long int max(long long int a,long long int b){
    if(a>=b) return a;

    return b;
}

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        long long int mat[n+2][m+2]={0};
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>mat[i][j];
            }
        }
        int ge=0,me=0;
        for(int i=1;i<=n;i++){
            ge=0;
            for(int j=1;j<=m;j++){
                me=max(mat[i-1][j],mat[i][j-1]);
                me=max(me,mat[i][j+1]);
                me=max(me,mat[i+1][j]);
                if(me<mat[i][j]) mat[i][j]=me;
            }
        }
        if(mat[1][1]>mat[1][2] && mat[1][1]>mat[2][1]) mat[1][1]=max(mat[1][2],mat[2][1]);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cout<<mat[i][j]<<' ';
            }
            cout<<endl;
        }


    }


    return 0;
}