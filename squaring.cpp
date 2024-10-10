/*
    Author :: Hvanman2code


*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vi>
#define vvl vector<vl>
#define vpii vector<pii>
#define vpll vector<pll>

const int N = 1e6 + 5;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        double arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];
        int el=*max_element(arr,arr+n);
        //for(int i=0;i<n;i++)   arr[i]=arr[i]/(el+1);
        bool fl=true;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]==1 && arr[i-1]>1) {
                fl=false;
                //break;
            }
        }


        int aoj=0;
        for(int i=1;i<n;i++){
 //cout<<arr[i]<<arr[i+1]<<endl;
            while(arr[i]<arr[i-1]){
               
                arr[i]*=arr[i];
                aoj++;
            }
            //cout<<i<<' '<<aoj<<endl;
        }
        if(fl) cout<<aoj<<endl;
        else cout<<-1<<endl;

    }


    return 0;
}