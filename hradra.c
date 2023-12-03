#include<stdio.h>

int main(){
  float sal, hra, da; 
  printf("Enter salary: ");
  scanf("%f",&sal);
  if (sal <1500){
    hra = sal/10;
    da = sal*0.9;
  }
  else{
    hra = 500;
    da = sal *0.98;
  }
  sal = sal+hra+da;
  printf("The gross salary is %f\n",sal);
}
