#include <stdio.h>
#include <string.h>

void slice(char * s){
  int i;
  for(i=0;s[i]!='\0';i++){
    s[i]=s[i+1];
  }
  s[i-1]='\0';
}

char* isPalindrome(char * s){
  if (strlen(s)<=1)
    return "The String is a Palindrome";
  if (s[0]!=s[strlen(s)-2])
    return "The String is not a Palindrome";
  slice(s);
  return isPalindrome(s);
}

int main(){
  char s[100];
  gets(s);
  printf("%s",isPalindrome(s));
}
