#include<stdio.h>
#include <math.h>

int main(){
  int p;
  printf("Enter a number:");
  scanf("%d",&p);
  for (int i=2; i<=sqrt(p);i++){
    if (p%i==0) {
      printf("%d is not prime\n",p);
      return 0;
    }
  }
  printf("%d is prime\n",p);
}
