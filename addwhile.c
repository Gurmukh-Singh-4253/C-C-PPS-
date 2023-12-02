#include <stdio.h>

int main(){
  int a=0, sum=0;
  do{
    sum+=a;
    scanf("%d",&a);
  }
  while(a!=0);
  printf("sum = %d\n",sum);
}
