#include<stdio.h>
#include<string.h>

int solve(){
    char s[3];
        scanf("%s",&s);
        if(s[0]!='y' && s[0]!='Y') printf("NO\n");
        else if(s[1]!='e' && s[1]!='E') printf("NO\n");
        else if(s[2]!='s' && s[2]!='S') printf("NO\n");
        else printf("YES\n");
        return 0;
}
int main(){
    int t=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        solve();
    }

    return 0;
}