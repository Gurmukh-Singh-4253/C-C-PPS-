#include <stdio.h>

int main(){
  int n;
  printf("Enter the number of characters out of which unique have to be extracted:");
  scanf("%d",&n);
  int arr[n],uni[n],count=0,pair;
  for(int i= 0; i<n;i++) {
    printf("Enter element %d:",i+1);
    scanf("%d",&arr[i]);
  }
  for (int i = 0; i<n; i++) {
    pair = 0;
    for (int j=i+1; j<n; j++) {
      if (arr[i] == arr[j]) pair = 1;
    }
    if (!pair) {
      uni[count] = arr[i];
      count++;
    }
  }
  for(int i = 0; i<count; i++) printf("%d ",uni[i]);
  printf("\n");
}
