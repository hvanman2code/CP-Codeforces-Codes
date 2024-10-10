#include<bits/stdc++.h>

#define ll long long int
#define tia(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define atv(v,e) v.push_back(e);
#define ats(s,e) s.insert(e);
#define yes cout<<"YES\n";
#define no cout<<"NO\n";


using namespace std;


ll longmin(ll a, ll b){
    if(a<b) return a;
    else return b;
}
ll longmax(ll a, ll b){
    if(a>b) return a;
    else return b;
}



int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        int arr[n];
        tia(arr,n);
        bool ans=true;
        int ops=0,fnz=0,x=0;
        int chkr=arr[0]%2;
        vector<int> fans;
        for(int i=1;i<n;i++){
            if(arr[i]%2!=chkr) ans=false;
        }
        if(!ans) cout<<-1<<endl;
        else {
            while(ops<40){
                x=(*min_element(arr,arr+n) + *max_element(arr,arr+n))/2;
                if(x==0) break;
                else {
                    fans.push_back(x);
                    for(int i=0;i<n;i++){
                        arr[i]=abs(x-arr[i]);
                    }
                }
                ops++;
            }
            x=(*min_element(arr,arr+n) + *max_element(arr,arr+n))/2;
            if(x!=0) cout<<-1<<endl;
            else {
                cout<<fans.size()<<endl;
                for(int i=0;i<fans.size();i++) cout<<fans[i]<<" ";
                cout<<endl;
            }



        }
        
        

        
        
    }

    return 0;
}