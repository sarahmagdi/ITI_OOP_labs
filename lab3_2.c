#include <stdio.h>
#include <conio.h>
struct Employee
{
    int code;
    char name[15];
    float netSalary;

};
void main (void)
{
    system("cls");
    struct Employee e1;
    printf("enter the employee code number\n");
    scanf("%d",&e1.code);
    printf("enter employee name\n");

    scanf("%s",&e1.name);
    //gets(e1.name);
    printf("enter employee net salary\n");
    scanf("%f",&e1.netSalary);
    printf("data of employee one are:\n");
    printf("the employee code is %d\n",e1.code);
    printf("the employee name is ");
    puts(e1.name);
    printf("the employee net salary is %f ",e1.netSalary);



    getch();



    /*
    char s[30];
    printf("Enter the string? ");
    gets(s);
    printf("You entered %s",s);
    */

}
