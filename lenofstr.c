#include <stdio.h>

int main(){
  char str[20];
  int i, length = 0;
  printf("Enter string :");
  scanf("%s",str);
  for(i = 0; str[i]!= '\0'; i++)
    length++;
  printf("Length of string is %d\n",length);
}
