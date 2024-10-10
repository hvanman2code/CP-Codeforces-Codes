#include<stdio.h>
void bubble_sort(int arr[], int n) {
  int i, j, swapped;
  for (i = 0; i < n - 1; i++) {
    swapped = 0;
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapped = 1;
      }
    }
    // If no elements were swapped during this iteration,
    // then the array is already sorted.
    if (swapped == 0) {
      break;
    }
  }
}

int main(){
    int t=0;
    scanf("%d",&t);
    while(t--){
        int n=0;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        bubble_sort(arr,n);
        int pass=0;
        int med=0;
        if(n%2==0) med =n/2;
        else med=(n/2)+1;
        int check=arr[med-1];
        for(int i=0;arr[med-1]==check;i++){
            arr[med-1]+=1;
            bubble_sort(arr,n);
            pass++;
        }
        printf("%d\n",pass);

    }

    return 0;
}