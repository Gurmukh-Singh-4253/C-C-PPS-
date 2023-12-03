#include <stdio.h>

int main(){
  char c;
  printf("Enter a charecter:");
  scanf("%c",&c);
  switch (c) {
    case('a'):
      printf("%c is a vowel\n",c);
      break;
    case('e'):
      printf("e is a vowel\n");
      break;
    case('i'):
      printf("i is a vowel\n");
      break;
    case('o'):
      printf("o is a vowel\n");
      break;
    case('u'):
      printf("u is a vowel\n");
      break;
    default:
      printf("%c is not a vowel\n",c);
      break;
  }
}
