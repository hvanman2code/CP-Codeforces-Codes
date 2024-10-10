#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,n;
    cin>>t;
    unordered_map<char , int> m1;
    unordered_map<int , char> m2;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int m;
        string s;
        cin>>m;
        while(m--){
            cin>>s;
            if(s.size() != n) cout<<"NO\n";
            else{
                
                m1.clear();
                m2.clear();
                m1[s[0]] = arr[0];
                m2[arr[0]] = s[0];
                bool ans=true;
                for(int i=1;i<s.size();i++){
                    if(m1.find(s[i])==m1.end()) m1[s[i]]=arr[i];
                    else if(m1[s[i]] != arr[i] ){
                         ans=false;
                         break;
                    }
                    if(m2.find (arr[i]) ==m2.end()) m2[arr[i]]=s[i];
                    else if(m2[arr[i]] != s[i] ) {
                        ans=false;
                        break;
                    }
                }
                if(ans) cout<<"YES\n";
                else cout<<"NO\n";
            }
        }

    }

    return  0;
}