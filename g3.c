#include <stdio.h>

int main(){
  int a,b,c;
  printf("Enter 3 numbers separated by a space:");
  scanf("%d %d %d",&a,&b,&c);
  printf("The greatest number is ");
  if (a>b){
    if (a>c) printf("%d\n",a);
    else printf("%d\n",c);
  }
  else if (b>c) printf("%d\n",b);
  else printf("%d\n",c);
}
