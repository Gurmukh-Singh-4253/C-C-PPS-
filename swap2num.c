#include <stdio.h>

int main(){
  int a,b;
  printf("Enter 2 values separated by space:");
  scanf("%d %d",&a,&b);
  printf("A: %d\t B: %d\n",a,b);
  printf("Swapping...\n");
  a = a+b;
  b = a-b;
  a = a-b;
  printf("A: %d\t B: %d\n",a,b);
}
