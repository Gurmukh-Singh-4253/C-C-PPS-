#include <stdio.h>
#include <string.h>

void strrev(char * s){
  char rev[sizeof(s)/4];
  for(int i = sizeof(s)/4-1 ; i>=0; i--){
    rev[sizeof(s)/4-2-i] = s[i];
  }
  rev[sizeof(s)/4-1] = '\0';
  s = rev;
}

int main(){
  char s[100];
  printf("Enter a string to reverse");
  gets(s);
  strrev(s);
  printf("Reverse of string is %s\n",s);
}
