#include <stdio.h>

int main(){
  int n,sum=0;
  scanf("%d",&n);
  do{
    sum+=n;
    n--;
  }
  while(n>0);
  printf("%d\n",sum);
}
