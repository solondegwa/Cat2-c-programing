/*
  Author : solomon Gichane
  Reg_no : CT102/G/21749/24
  */
#include<stdio.h>
#include<string.h>

struct employee
{
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
}employee1, employee2;

int main(){
    strcpy(employee1.name, "John Doe");
    employee1.id = 12345;
    strcpy(employee1.department, "Human Resources");
    employee1.salary = 55000.50;
    strcpy(employee1.email, "john doe@company.com");

    printf("The employee name:%s\n", employee1.name);
    printf("The employee id:%d\n", employee1.id);
    printf("The employee department:%s\n", employee1.department);
    printf("The employee salary:%.2f", employee1.salary);
    printf("The employee email:%s\n", employee1.email);

    return 0;
}
