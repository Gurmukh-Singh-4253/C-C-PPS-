#include <stdio.h>
#include <math.h>

int main(){
  int n ,x, arm=0;
  printf("Enter a number and detect wether it is prime or not\n");
  scanf("%d",&n);
  x = n;
  while (n >0) {
    arm += pow(n%10,floor(log10(x))+1);
    n = n/10;
  }
  if (x == arm) printf("The given number is an armstrong\n");
  else {
    printf("The given number is not an armstrong\n");
  }
}
