#include <stdio.h>
#include <stdlib.h>

struct employee{
  int Ecode;
  char name[40];
  int age;
  float salary;
  char department[10];
};

int main(){
  struct employee freshers[5];
  for(int i=0; i<5;i++){
    printf("Enter the Employee code of employee %d:",i+1);
    scanf("%d",&freshers[i].Ecode);
    printf("Enter the name of employee %d:",i+1);
    scanf("%s",freshers[i].name);
    // fgets(freshers[i].name,40,stdin);
    printf("Enter the age of employee %d:",i+1);
    scanf("%d",&freshers[i].age);
    printf("Enter the salary of employee %d:",i+1);
    scanf("%f",&freshers[i].salary);
    printf("Enter the department of employee %d:",i+1);
    scanf("%s",freshers[i].department);
    // fgets(freshers[i].department,10,stdin);
  }
  for(int i=0; i<5;i++){
    printf("Employee %d:\nEmployeeCode: %d\nName: %s\nAge: %d\nSalary: %f\nDepartment: %s\n\n",i+1,freshers[i].Ecode,freshers[i].name,freshers[i].age,freshers[i].salary,freshers[i].department);
  }
}
