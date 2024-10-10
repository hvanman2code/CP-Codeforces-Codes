#include <bits/stdc++.h>

using namespace std;

int main()
{
        string s;
        cin >> s;

        int l = s.length();
        int h1=0,e1=0,l1=0,l2=0,o1=0;
        for(int i=0;i<l;i++){
                if(s[i]=='h' && h1==0) h1=i+1;
                else if(s[i]=='e' && e1==0 && h1!=0) e1=i+1;
                else if(s[i]=='l' && l1==0 && e1!=0) l1=i+1;
                else if(s[i]=='l' && l2==0 && l1!=0) l2=i+1;
                else if(s[i]=='o' && o1==0 && l2!=0) o1=i+1;
        }
        if(h1<e1 && e1<l1 && l1<l2 && l2<o1) cout<<"YES";
        else cout<<"NO";


        return 0;
}