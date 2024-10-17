/*
    Author:: Hvanman2code
*/
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n,x,cnt=0,even,odd;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x&1){
            cnt++;
            even=i;
        }
        else odd=i;
    }
    if(cnt==1) cout<<even+1<<endl;
    else cout<<odd+1<<endl;
    return 0;
}