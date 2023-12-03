#include <stdio.h>

int main(){
  int y ;
  printf("Enter the year:");
  scanf("%d",&y);
  if (y%1000==0) printf("The year %d is a leap year\n",y);
  else if (y%100==0) printf("The year %d is not a leap year\n",y);
  else if (y%4==0) printf("The year %d is a leap year\n",y);
  else printf("The year %d is not a leap year\n",y); 
}
