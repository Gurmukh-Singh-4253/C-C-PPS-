#include <stdio.h>

struct duplicate{
  int elem;
  int count;
};

int main(){
  int n;
  printf("Enter the number of characters which are to be analysed:");
  scanf("%d",&n);

  int arr[n],iterator=0,pair,found;
  struct duplicate dup[n];

  for(int i= 0; i<n;i++) {
    printf("Enter element %d:",i+1);
    scanf("%d",&arr[i]);
  }

  for (int i = 0; i<n ; i++){
    found = 0;
    for (int j = 0; j<=iterator; j++){
      if (dup[j].elem == arr[i]){
        found = 1;
        dup[j].count++;
        break;
      }
    }
    if (!found){
      dup[iterator].elem = arr[i];
      dup[iterator].count = 1;
      iterator++;
    }
  }
  
  for(int i = 0; i<iterator; i++){
    if (dup[i].count == 1){
      printf("%d is a unique element\n",dup[i].elem);
    }
    else{
      printf("%d appeared %d times this array\n",dup[i].elem,dup[i].count);
    }
  }
}
