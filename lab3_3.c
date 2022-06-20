#include <stdio.h>
#include <conio.h>
struct Employee
{
    int code;
    char name[15];
    float netSalary;

};
struct Employee global_emp;
void readEmployeeData();
void printEmployeeData();
void updateEmployeeData();
void deleteEmployeeData();

//struct Employee readEmployeeData();
//void printEmployeeData(struct Employee e2);




void main (void)
{
    system("cls");

    readEmployeeData();
    printEmployeeData();
    updateEmployeeData();
    printEmployeeData();
    deleteEmployeeData();
    printEmployeeData();
    getch();
}

void readEmployeeData()
{


    printf("enter the employee code number\n");
    scanf("%d",&global_emp.code);
    printf("enter employee name\n");
    scanf("%s",&global_emp.name);
    printf("enter employee net salary\n");
    scanf("%f",&global_emp.netSalary);

}

void printEmployeeData()
{

    printf("data of employee one are:\n");
    printf("the employee code is %d\n",global_emp.code);
    printf("the employee name is ");
    puts(global_emp.name);
    printf("the employee net salary is %f ",global_emp.netSalary);




}

void updateEmployeeData(){

char new[15];
printf("enter employee update data\n");
 printf("enter employee new code number\n");
    scanf("%d",&global_emp.code);
    printf("enter employee name\n");
    scanf("%s",&new);
    strcpy(global_emp.name, new);
    printf("enter employee new net salary\n");
    scanf("%f",&global_emp.netSalary);



}
void deleteEmployeeData(){
global_emp.code=0;
strcpy(global_emp.name,"");
global_emp.netSalary=0.0;



}

