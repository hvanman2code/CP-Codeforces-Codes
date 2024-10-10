#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> av;
int n=0;
vector<int> v;


void pv(vector<int>  tpv){
    int s=tpv.size();
    for(int i=0;i<s;i++) cout<<tpv[i]<<' ';
    //cout<<endl;
    //cout<<tpv[tpv.size()-1];
}

void gs(vector<int> ss,int i){
    if(i==v.size()) {
        av.push_back(ss);
        return;
    }

    gs(ss,i+1);
    ss.push_back(v[i]);
    gs(ss,i+1);
    ss.pop_back();


}


int main(){
    cin>>n;
    v.resize(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<int> em;
    gs(em,0);

    for(int i=0;i<av.size();i++){
        cout<<'{';
        pv(av[i]);
        cout<<'}'<<endl;
    }


    return 0;
}