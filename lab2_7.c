#include <stdio.h>
#include <conio.h>
void main (void)
{
    system("cls");
    int n;
    int max;
    int min;
    printf("enter your array size");
    scanf("%d",&n);

    int arr[n];
    printf("enter your array numbers\n");

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    max=arr[0];
    min=arr[0];

    for(int i=1; i<n; i++)
    {
        if(arr[i]> max)
        {
            max=arr[i];
        }

        if(arr[i]<min)
        {
            min=arr[i];
        }


    }
    printf("max number of array is %d and min is %d", max,min);


    getch();
}
