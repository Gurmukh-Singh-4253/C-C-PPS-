#include <stdio.h>
#include <string.h>

int main(){
  char str1[12] = "Hello";
  char str2[12] = "World";
  char str3[12];

  int len, result;
  len = strlen(str1);
  printf("%d\n",len);

  strcpy(str3, str1);
  printf("%s\n",str1);

  strcat(str2,str1);
  printf("%s\n",str2);

  result = strcmp(str1, str2);
  printf("%d\n",result);
}
