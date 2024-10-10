#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n;
    int boys[n];
    for(int i=0;i<n;i++){
        cin>>boys[i];
    }
    cin>>m;
    int girls[m];
    for(int i=0;i<m;i++){
        cin>>girls[i];
    }
    int pairs=0;
    sort(boys,boys+n);
    sort(girls,girls+m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m ;j++){
                if(abs(boys[i]-girls[j])<=1){
                    pairs++;
                    girls[j]=103;
                    break;
                }
        }
    }
    printf("%d",pairs);
    


    return 0;
}