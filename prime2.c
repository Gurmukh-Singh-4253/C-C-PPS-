#include <stdio.h>
#include <math.h>

int main(){
	int x;
	printf("Enter number: ");
	scanf("%d",&x);
  int c = sqrt(x);
  
  while(c >1){
    if (x%c ==0){
      printf("The number is not prime\n");
      return 0;
    }
    c--;
  }
  printf("The number is prime\n");
}
