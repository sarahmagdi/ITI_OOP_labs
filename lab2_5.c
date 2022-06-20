#include <stdio.h>
#include <conio.h>
void main (void)
{
    system("cls");
    for(int i=10; i>0; i--)
    {
        for(int j=12; j>0; j-- )
        {
            printf("%d*%d=%d\t",i,j,i*j);
        }
        printf("\n");





    }



    getch();
}
