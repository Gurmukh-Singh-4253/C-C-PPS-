#include <stdio.h>
#include <stdlib.h>

int x1,y1,x2,y2,choice;

void sum(int a[x1][y1],int b[x2][y2]){
  for(int i= 0; i<x1; i++){
    for(int j=0; j<y1; j++){
      printf("%d\t",a[i][j]+b[i][j]);
    }
    printf("\n");
  }
}

void sub(int a[x1][y1],int b[x2][y2]){
  for(int i= 0; i<x1; i++){
    for(int j=0; j<y1; j++){
      printf("%d\t",a[i][j]-b[i][j]);
    }
    printf("\n");
  }
}

void prod(int a[x1][y1],int b[x2][y2]){
  int buffer;
  for(int i=0;i<x1;i++){
    for(int j= 0;j<y2;j++){
      buffer = 0;
      for(int k=0;k<y1;k++){
        buffer+= a[i][k]*b[k][j];
      }
      printf("%d\t",buffer);
    }
    printf("\n");
  }
}

int main(){
  printf("Enter the order of the first matrix:");
  scanf("%d %d",&x1,&y1);
  printf("Enter the order of the second matrix:");
  scanf("%d %d",&x2,&y2);
  int a[x1][y1],b[x2][y2];
  for(int i = 0; i<x1; i++){
    for(int j= 0; j<y1; j++){
      printf("Enter element A(%d,%d)",i+1,j+1);
      scanf("%d",&a[i][j]);
    }
  }
  for(int i = 0; i<x2; i++){
    for(int j= 0; j<y2; j++){
      printf("Enter element B(%d,%d)",i+1,j+1);
      scanf("%d",&b[i][j]);
    }
  }
  printf("Enter the choice:\n1) addition\n2) substraction\n3) multiplication\n");
  scanf("%d",&choice);
  switch(choice){
    case(1):
    if (x1==x2 && y1==y2) sum(a,b);
    else printf("Illegal operation, aborting");
    break;
    case(2):
    if (x1==x2 && y1==y2) sub(a,b);
    else printf("Illegal operation, aborting");
    break;
    case(3):
    if (y1==x2) prod(a,b);
    else printf("Illegal operation, aborting");
    break;
  }
}
