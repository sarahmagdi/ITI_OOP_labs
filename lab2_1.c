#include <stdio.h>
#include <conio.h>
void main (void)
{
    system("cls");
    int x;// the size of dim
    int r=0;
    int c=0;
    printf("enter number of dimen");
    scanf("%d",&x);
    if(x%2!=0)
    {
        int arr[x][x];
        arr[r][c]=1;
        for(int i=1; i<=x*x; i++)
        {
            if(i%x!=0)
            {
                c--;
                r--;
                if(c<0)
                {
                    c=x-1;
                }
                if(r<0)
                {
                    r=x-1;
                }
                arr[r][c]=i+1;


            }
            else
            {
                r++;
                if(c<0)
                {
                    c=x-1;
                }
                if(r<0)
                {
                    r=x-1;
                }
                arr[r][c]=i+1;
            }

        }
        for(int j=0; j<x; j++)
        {
            for(int r=0; r<x; r++)
            {
                printf("%d\t",arr[j][r]);
            }
            printf("\n");

        }


    }
    else
    {
        printf("the algorithm cannot print magic Box puzzel with even num ");
    }



    getch();
}
