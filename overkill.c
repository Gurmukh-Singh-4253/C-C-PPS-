#include <stdio.h>

struct person {
  char name[40];
  int age;
  int status;
};

int main(){
  char healthissue;
  struct person people[10];
  for (int i =0; i<10;i++){
    healthissue = 'n';
    printf("Enter the name of person %d:",i+1);
    scanf("%s",people[i].name);
    printf("Enter the age of person %d:",i+1);
    scanf("%d",&people[i].age);
    printf("Does the person have diabetes or hypertension (y/n):");
    scanf(" %c",&healthissue);
    if (healthissue == 'y'){
      people[i].status = 1;
    }
    else {
      people[i].status = 0;
    }
  }
  int count = 0;
  for (int i = 0;i <10;i++) {
    if (people[i].age >65 && people[i].status==1){
      count++;
    }
  }
  printf("%d is the number of elderly sick people\n",count);
}
