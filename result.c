#include<stdio.h>

void result(float x){
  if (x <40 ) printf("you got grade F with an aggregate of %f",x); 
  else if (x<60) printf("you got grade E with an aggregate of %f",x); 
  else if (x<70) printf("you got grade D with an aggregate of %f",x); 
  else if (x<80) printf("you got grade C with an aggregate of %f",x); 
  else if (x<90) printf("you got grade B with an aggregate of %f",x); 
  else if (x<100) printf("you got grade A with an aggregate of %f",x);
}

int main(){
  char name[40];
  int maths, physics, pps, egd, eco, stat; 
  float average; 
  printf("Enter your name:"); 
  scanf("%s",name); 
  printf("Enter the marks in maths:"); 
  scanf("%d",&maths); 
  printf("Enter the marks in physics:"); 
  scanf("%d",&physics); 
  printf("Enter the marks in pps:"); 
  scanf("%d",&pps); 
  printf("Enter the marks in egd:"); 
  scanf("%d",&egd); 
  printf("Enter the marks in eco:"); 
  scanf("%d",&eco); 
  printf("Enter the marks in stat:"); 
  scanf("%d",&stat); 
  average = (maths + physics + pps + egd + eco + stat)/6.0; 
  result(average); 
}
