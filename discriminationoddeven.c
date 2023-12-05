#include <stdio.h>

int main(){
  int input, even[10], odd[10],evencount = 0, oddcount = 0;
  for(int i = 0; i<10; i++){
    scanf("%d",&input);
    if (input%2==0) even[evencount++]=input;
    else odd[oddcount++]=input;
  }
  printf("Even integers: ");
  for(int i = 0; i<evencount ; i++){
    printf("%d ",even[i]);
  }
  printf("\nOdd integers: ");
  for(int i = 0; i<oddcount ; i++){
    printf("%d ",odd[i]);
  }
  printf("\n");
}
