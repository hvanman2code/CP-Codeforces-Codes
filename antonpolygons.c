#include<stdio.h>
#include<string.h>
int main(){
    int n=0;
    scanf("%d",&n);
    int faces=0;
    char arr[20];
    for(int i=0;i<n+1;i++){
        gets(arr);
        // printf("%s\n",arr);

        if(arr=="Tetrahedron") faces = faces + 4;
        else if(arr=="Cube") faces = faces + 6;
        else if(arr=="Octahedron") faces = faces + 8;
        else if(arr=="Dodecahedron") faces = faces + 12;
        else if(arr=="Icosahedron") faces = faces + 20;

    }
    printf("%d",faces);

    return 0;
}