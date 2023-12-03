#include<stdio.h>
#include<math.h>

int main(){
  double a,b,c,area;
  printf("Enter the sides of the triangle:");
  scanf("%lf %lf %lf",&a,&b,&c);
  area = sqrt((a+b+c)/2*((a+b+c)/2-a)*((a+b+c)/2-b)*((a+b+c)/2-c));
  printf("The area of the given triangle is :%lf\n",area);
}
