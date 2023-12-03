#include<stdio.h>

// This calculates simple interest given principle, rate of interest and time
int main(){
  float p,r,t,interest;
  int time;
  printf("Enter the principle amount:");
  scanf("%f",&p);
  printf("Enter the rate of interest in percent:");
  scanf("%f",&r);
  printf("Enter the time in years:");
  scanf("%f",&t);
  interest = p*r*t/100;
  printf("The total interest generated is %f, the amount to be paid is %f\n",interest, interest+p);
}
