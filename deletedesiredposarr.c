#include <stdio.h>

int main(){
  int arr[] = {0,1,2,3,4,5,6,7,8,9},undesired;
  printf("Enter undesired position(indexing starts from 0):");
  scanf("%d",&undesired);
  for(int i= undesired;i<10;i++){
    arr[i] = arr[i+1];
  }
  arr[9]=0;
  for(int i = 0; i<10; i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}
