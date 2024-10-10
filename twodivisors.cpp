#include<iostream>

using namespace std;

int main(){
    int t=0;
    cin>>t;

    while(t--){
        int a=0,b=0;
        cin>>a>>b;

        int ans=0;
        if(b%a==0) ans=b*(b/a);
        else{
            int gcd=1;
        for(int i=a;i>1;i--){
            if(a%i==0 && b%i==0) {
                gcd=i;
                break;
            }
        }
        ans=b*a/gcd;
        }
        cout<<ans<<endl;
        

    }

    return 0;

}

