#include <stdio.h>

int main(){
  int a;
  scanf("%d",&a );
  for(int i = 1; i<a; i++){
    if (i*i == a){
      printf("%d is a perfect square.",a);
      return 0;
    }
  }
  printf("%d is not a perfect square",a);
}
