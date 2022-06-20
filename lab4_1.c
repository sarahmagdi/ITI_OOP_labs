#include <stdio.h>
#include <conio.h>

void swap_fun(int *a,int *b);



void main (void)
{
    system("cls");
    int x=5,y=4;
     printf("numbers before calling swap function X=%d and y=%d\n",x,y);
     swap_fun(&x,&y);
     printf("numbers after calling swap function X=%d and y=%d",x,y);






    getch();
}
void swap_fun(int *a,int *b){
int temp_va;
temp_va= *a;
*a=*b;
*b=temp_va;



}
