#include<stdio.h>
#include<math.h>

int main(){
  printf("This program is for compound interest\n");
  float p,r,t,n,interest;
  printf("Enter the principle amount:");
  scanf("%f",&p);
  printf("Enter the rate of interest in percent:");
  scanf("%f",&r);
  printf("Enter the time in years:");
  scanf("%f",&t);
  printf("Enter the number of times the interest is compounded per year:");
  scanf("%f",&n);
  interest = p*pow(1+r/(100*n),t*n);
  printf("The total interest generated is %f, the amount to be paid is %f\n",interest-p, interest);
}

