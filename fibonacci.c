#include <stdio.h>

double fib(int n){
  if (n<0) {
    printf("Enter valid value\n");
    return 0;
  }
  if (n==1||n==2) return 1;
  return (fib(n-1)+fib(n-2));
}

int main(){
  int n;
  printf("Enter the position of the number of fibonacci:");
  scanf("%d",&n);
  for (int i = 1; i<=n; i++)
    printf("%lf ",fib(i));
  printf("\n");
}
