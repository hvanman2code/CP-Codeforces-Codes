#include <iostream>

using namespace std;

int main()
{
    int n = 0, m = 0;
    cin >> n >> m;
    int ans=0;

    if(m==10){
        if(n>1){
            cout<<1;
        for(int i=1;i<n;i++){
            cout<<0;
        }
        }
        else cout<<-1;
    }
    else{
        for(int i=1;i<=n;i++){
            cout<<m;
        }
}
    
    return 0;
}