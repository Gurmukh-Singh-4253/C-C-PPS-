#include <stdio.h>

int main(){
  float c,f;
  printf("Enter temprature in Celcius:");
  scanf("%f",&c);
  f = (c*9/5)+32;
  printf("this is equivalent to %f degrees fahrenheit",f);
}
