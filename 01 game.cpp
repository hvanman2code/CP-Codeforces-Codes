#include<bits/stdc++.h>

using namespace std;

int main(){
        int n=0;
        cin>>n;
        while(n--){
                string a;
                cin>>a;
                int count=0;
                int i=0;
                // cout<<a.length()<<"     ";
                while(i<a.length()){
                      if(a[i]=='0') count++;
                      i++;  
                }
                int k=a.length();
                int check=min(count,k-count);
                if(check%2==0) cout<<"NET\n";
                else cout<<"DA\n";
                
        }
        
        

        return 0;
}