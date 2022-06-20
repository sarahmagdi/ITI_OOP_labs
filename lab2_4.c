#include <stdio.h>
#include <conio.h>
void main (void)
{
    system("cls");
    for(int i=1; i<=10; i++)
    {
        for(int j=1; j<=12; j++ )
        {
            printf("%d*%d=%d\t",i,j,i*j);
        }
        printf("\n");





    }



    getch();
}
