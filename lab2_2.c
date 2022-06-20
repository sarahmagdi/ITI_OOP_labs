#include <stdio.h>
#include <conio.h>
void main (void)
{
    system("cls");
    int n;
    int sum=0;
    while(sum<=100)
    {
        printf("enter your integer number");
        scanf("%d",&n);
        sum+=n;

    }
    printf("the sum of your numbers exceeds the 100");


    getch();
}
