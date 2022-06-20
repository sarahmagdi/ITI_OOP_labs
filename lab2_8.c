#include <stdio.h>
#include <conio.h>
void main (void){
system("cls");
int arr[3][4];


 printf("enter your array numbers\n");

    for(int i=0; i<3; i++)
    {
       for(int j=0;j<4;j++){

       scanf("%d",&arr[i][j]);

       }

        }

     int sum=0;
     int aver=0;

      for(int i=0; i<3; i++)
    {
        for(int j=0;j<4;j++){
       sum+=arr[i][j];
       printf("%d\t",arr[i][j]);

       }
       printf("sum of row is %d\n",sum);


        }


        for(int i=0;i<4;i++){

          for(int j=0;j<3;j++){

            aver+=arr[j][i];


          }
            printf("average is%d\t",aver/3);


        }




getch();
}
