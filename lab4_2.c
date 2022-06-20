#include <stdio.h>
#include <conio.h>

void read_fun_arr(int *p1,int size);
void print_fun_arr(int *p2,int size);


void main (void)
{
    system("cls");
    int n;
    printf("enter your array size");
    scanf("%d",&n);

    int arr[n];

    read_fun_arr(arr,n);
    print_fun_arr(arr,n);





    getch();
}


void read_fun_arr(int *p1,int size){

 printf("enter your array numbers\n");
 for(int i=0; i< size; i++)
    {
        scanf("%d",&p1[i]);

    }



}
void print_fun_arr(int *p2,int size){

printf("array numbers are \t");
 for(int i=0; i<size; i++)
    {
        printf("%d\t",p2[i]);

    }




}


