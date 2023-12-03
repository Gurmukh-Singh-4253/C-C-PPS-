#include <stdio.h>

int main(){
  int i,sum =0; 
  do {
    scanf("%d",&i );
    sum += i;
  }
  while (i!=0);
  printf("sum = %d\n", sum);
}
