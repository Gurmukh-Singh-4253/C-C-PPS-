#include <stdio.h>

void swap(int*x,int*y){
  int temp;
  temp = *x;
  *x = *y;
  *y= temp;
}

void dessort(int arr[], int arrlen){
  //to end recursion
  if (arrlen<=1) return;

  // identifying minimum element
  int minindex = 0;
  for(int i=1; i<arrlen; i++)
    if(arr[i]<arr[minindex]) minindex = i;

  // swapping minimum and last element of array
  swap(&arr[minindex],&arr[arrlen-1]);

  //recursive call
  dessort(arr,arrlen-1);
}

int main(){
  int number;
  printf("Enter the number of elements:");
  scanf("%d",&number);
  int arr[number];
  for(int i = 0; i<number; i++){
    printf("Enter element %d:",i+1);
    scanf("%d",&arr[i]);
  }
  dessort(arr,number);
  printf("Sorted list:");
  for(int i = 0; i<number; i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}
