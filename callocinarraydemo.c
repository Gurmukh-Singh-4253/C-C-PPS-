#include "stdio.h"

int main(){
  int num1,num2,num3,num4,num5;
  int num[5];
  printf("%p %p %p %p %p\n",&num1,&num2,&num3,&num4,&num5);
  for(int i =0; i<5; i++) printf("%p ",&num[i]);
}
