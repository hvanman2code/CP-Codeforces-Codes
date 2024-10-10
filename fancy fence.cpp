#include<bits/stdc++.h>

using namespace std;



int main(){
        int t=0;
        cin>>t;
        while(t--){
                int a=0;
        cin>>a;

        int n=3;
        float angle = 180*(n-2)/n;

        int count=0;
        while(angle<=a){
                angle = 180*(n-2)/n;
                if(angle ==a){
                        count++;
                        break;
                }
                else {
                        n++;
                }
        }

        if(count) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
        }

        return 0;
}