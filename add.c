#include <stdio.h>
#include <stdlib.h>

float add(float a,float b){
  return(a+b);
}

float sub(float a, float b){
  return(a-b);
}

float times(float a, float b){
  return(a*b);
}

float div(float a, float b){
  float c;
  c = a/b;
  return(c);
}

int main(){
  float a, b; 
  int choice;
  printf("Enter two integers separated by a space");
  scanf("%f %f",&a,&b);
  printf("1:addition\n");
  printf("2:substraction\n");
  printf("3:multiplication\n");
  printf("4:division\n");
  printf("Enter your choice:\n");
  scanf("%d",&choice);
  switch(choice){
    case(1):
      printf("sum:");
      printf("%d\n",add(a,b));
      break;
    case(2):
      printf("difference:");
      printf("%d\n",sub(a,b));
      break;
    case(3):
      printf("product:");
      printf("%d\n",times(a,b));
      break;
    case(4):
      printf("quotient:");
      printf("%f\n",div(a),(b));
      break;
  }
}
