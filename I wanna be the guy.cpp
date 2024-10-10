#include<bits/stdc++.h>


using namespace std;

int main(){
    int n=0;
    cin>>n;
    int s1=0;
    cin>>s1;
    set<int> hi;
    for(int i=0;i<s1;i++){
        int t=0;
        cin>>t;
        hi.insert(t);
    }
    int s2=0;
    cin>>s2;
    for(int i=0;i<s2;i++){
        int t=0;
        cin>>t;
        hi.insert(t);
    }
    int sum=0;
    for(int j:hi){
        sum+=j;
    }

    int ans=(n*(n+1))/2;
    if(sum==ans) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";


    return 0;
}