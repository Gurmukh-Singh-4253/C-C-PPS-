#include <stdio.h>

int main(){
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  for(int i=(a<b)?a:b; i>0; i--){
    if ((a%i ==0) && (b%i==0)){
      printf("HCF is %d",i);
      break;
    }
  }
}
