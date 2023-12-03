#include <stdio.h>

int main(){
  int a,b,i;
  scanf("%d",&a);
  scanf("%d",&b);
  i = (a>b)?a:b;
  while(1){
    if ((i%a ==0) && (i%b==0)){
      printf("LCM is %d",i);
      break;
    }
    i++;
  }
}
