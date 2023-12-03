#include <stdio.h>

int main(){
  int a[5];

  for(int i = 0; i<5; i++){
    scanf("%d",&a[i]);
  }

  for(int i = 0; i<5; i++){
    printf("%d ",a[i]);
  }

  for(int i = 0; i<2; i++){
    a[i] = a[i] + a[4-i];
    a[4-i] = a[i] - a[4-i];
    a[i] = a[i] - a[4-i];
  }

  printf("\n");
  for(int i = 0; i<5; i++){
    printf("%d ",a[i]);
  }
}
