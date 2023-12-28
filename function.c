#include <stdio.h>

int fun();

int main(){
  int c = fun();
  printf("%d",c);
}

int fun(){
  return 10;
}
