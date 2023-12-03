#include <stdio.h>

int main(){
  int marks[5];
  int sum = 0;

  for(int i = 0; i<5; i++){
    scanf("%d",&marks[i]);
    sum += marks[i];
  }

  printf("Sum = %d\n",sum);
}
