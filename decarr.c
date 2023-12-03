#include <stdio.h>

int main(){
  int marks[10];

  for(int i = 0; i<10; i++){
    scanf("%d",&marks[i]);
    printf("Element %d : %d\n",i+1,marks[i]);
  }

}
