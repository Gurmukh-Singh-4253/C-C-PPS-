#include <stdio.h>

int main(){
  // for (int i = 0; i<10; i++){
  //   printf("%d\n",i); 
  // }
  // for (int i =0;i<10;++i ) {
  //   printf("%d \n",i );
  // }
  int i = 0;
  int a = i++;
  printf("%d %d \n",a,i);
  i = 0;
  int b= ++i;
  printf("%d %d \n",b,i);
}
