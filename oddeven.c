#include <stdio.h>
#include <string.h>

int main(){
  int n;
  char nature[9];

  printf("Enter Number:");
  scanf("%d",&n);

  if (n == 0) strcpy(nature,"neutral");
  else if (n>0) strcpy(nature,"positive");
  else strcpy(nature,"negative");

  if (n%2==0) printf("%d is a %s even integer.\n",n,nature);
  else printf("%d is a %s odd integer.\n",n,nature);
}
