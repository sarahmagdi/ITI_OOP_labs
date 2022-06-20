#include <stdio.h>
#include <conio.h>
void main (void)
{
    system("cls");
    int n;

    printf("enter your array size");
    scanf("%d",&n);

    int arr[n];
    printf("enter your array numbers\n");

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("array numbers are \t");
    for(int i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);

    }


    getch();
}
