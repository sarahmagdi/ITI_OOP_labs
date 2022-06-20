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
    int n;
    printf("enter your array size");
    scanf("%d",&n);

     struct Employee * arr_of_pointers;
     arr_of_pointers=( struct Employee *)malloc(n *sizeof( struct Employee));

    //to read data from user and fill array
    printf("write data for all employees\n");
    for(int i=0;i<n;i++){
     printf("\nenter the employee%d code number\n",i+1);
    scanf("%d",&arr_of_pointers[i].code);
    printf("enter employee %d name\n",i+1);
    scanf("%s",&arr_of_pointers[i].name);
    printf("enter employee %d net salary\n",i+1);
    scanf("%f",&arr_of_pointers[i].netSalary);}

    // to print data

    printf("data for all employees are:");
    for(int i=0;i<n;i++){


    printf("\ndata for employee %d are:\n",i+1);
    printf("the employee code is %d\n",arr_of_pointers[i].code);
    printf("the employee name is ");
    puts(arr_of_pointers[i].name);
    printf("the employee net salary is %f ",arr_of_pointers[i].netSalary);


    }
free(arr_of_pointers);
    /*for(int i=0;i<n;i++){
    free(arr_of_pointers[i]);
    }*/







    getch();
}
