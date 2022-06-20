#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main (void)
{
    int n,m;
    char **p;
    printf("enter num of array of pointers n\n ")  ;

    scanf("%d",&n);
    printf("write the size of each array of characters m\n")  ;
    scanf("%d",&m);
    p=(char**)(malloc(n*sizeof(char*)));
    for(int i=0; i<n; i++)
    {
        p[i]=(char *)malloc(m*sizeof(char));
    }

    for(int i=0; i<n; i++)
    {
        printf("enter data for arr %d",i+1);

        //scanf("%s",p[i]);



        for(int j=0; j<m; j++)
        {
            printf("enter data for arr p[%d][%d]:",i,j);
            getchar();
            scanf("%c",&p[i][j]);




        }
    }
    for(int i=0; i<n; i++)
    {

        printf("data for arr %d\n",i+1);
        printf("%s\n",p[i]);



        for(int j=0; j<m; j++)
        {
            printf("data for arr p[%d][%d]:",i,j);
            printf("%c\n",p[i][j]);

        }
    }

    for(int i=0; i<n; i++)
    {
        free(p[i]);
    }

    free(p);


}
