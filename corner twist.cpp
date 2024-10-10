#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        char c;

        int a[n][m],b[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> c;
                a[i][j] = c - '0';
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> c;
                b[i][j] = c - '0';
            }
        }
        bool it=true;
        int sa=0,sb=0;
        for(int i = 0; i < n; i++){
            sa=0;
            sb=0;
            for(int j = 0; j < m; j++){
                sa+=a[i][j];
                sb+=b[i][j];
                
            }
            if(sa%3!=sb%3) it=false;
                
            
        }
        for(int i = 0; i < m && it==true; i++){
            sa=0;
            sb=0;
            for(int j = 0; j < n; j++){
                sa+=a[j][i];
                sb+=b[j][i];
                
            }
            if(sa%3!=sb%3) it=false;
                
            
        }
        if(it) cout << "YES" << endl;
        else cout << "NO" << endl;


    }

    return 0;
}
