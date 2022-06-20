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

    struct Employee eployee_array_5[5];

    for(int i=0; i<5; i++)
    {
        printf("enter data for employee %d\n",i+1);

        printf("enter the employee %d code number\n",i+1);
        scanf("%d",&eployee_array_5[i].code);
        printf("enter employee %d name\n",i+1);
        scanf("%s",&eployee_array_5[i].name);
        printf("enter employee %d net salary\n",i+1);
        scanf("%f",&eployee_array_5[i].netSalary);


    }

    printf("all data for our employees\n");

    for(int i=0; i<5; i++)
    {


        printf("\ndata of employee %d are:\n",i+1);
        printf("the employee code is %d\n",eployee_array_5[i].code);
        printf("the employee name is ");
        puts(eployee_array_5[i].name);
        printf("the employee net salary is %f ",eployee_array_5[i].netSalary);



    }






    getch();



}
