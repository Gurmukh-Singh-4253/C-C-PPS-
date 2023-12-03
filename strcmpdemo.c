#include <stdio.h>
#include <string.h>

int main(){
  char str1[20],str2[20];
  int value;
  printf("enter the first string:");
  scanf("%s",str1);
  printf("enter the second string:");
  scanf("%s",str2);
  value = strcmp(str1, str2);
  if(value==0)
    printf("Strings are same\n");
  else
    printf("Strings are not same\n");
}
