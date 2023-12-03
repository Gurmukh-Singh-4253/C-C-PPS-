#include <stdio.h>

int main(){
  int a = 2;
  float b = 3.5;
  char c = 'D';
  printf("a is %d while b is %f and c is %c\n",a,b,c);
  a = 4;
  b = 1.5;
  c = 'm';
  printf("after changing values, a is %d while b is %f and c is %c\n",a,b,c);
}
