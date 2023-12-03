#include<stdio.h>

int main(){
  char c;
  int t1,t2;
  printf("Enter a single character:");
  scanf("%c",&c);
  if (c >= 'a' &&  c<='z') {
    printf("%c is a lowercase letter\n",c);
  } 
  else if (c >= 'A' &&  c<='Z'){
    printf("%c is an uppercase letter\n",c);
  }
  else {
    printf("%c is a special character\n",c);
  }
}
