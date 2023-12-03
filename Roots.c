#include <stdio.h>
#include <math.h>

int main(){
  float a,b,c,D;
  printf("Enter the coefficient of x^2:");
  scanf("%f",&a);
  printf("Enter the coefficient of x:");
  scanf("%f",&b);
  printf("Enter the constant term:");
  scanf("%f",&c);
  D = b*b - 4*a*c;
  if (D==0) printf("The roots are %f and %f\n",-b/2*a,-b/2*a);
  else if (D>0) printf("The roots are %f and %f\n",(-b+sqrt(D))/2*a,(-b-sqrt(D))/2*a);
  else printf("the roots are %f+%f i and %f-%f i\n",-b/2*a,sqrt(-D)/2*a,-b/2*a,sqrt(-D)/2*a);
}

