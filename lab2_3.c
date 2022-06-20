#include <stdio.h>
#include <conio.h>
void main (void)
{
    system("cls");
    int x;
    int ch;
    printf("our menu is\nto choice fish press 1 which is the first choice\nto choice rice press 2 which is the second choice\nto choice fruit press 2 which is the third choice\n");
    do
    {
        printf("enter your choice");
        scanf("%d",&x);

        switch(x)
        {
        case 1:
            printf("your choice is the first 'fish'\n");
            break;
        case 2:
            printf("your choice is the second 'rice'\n");
            break;

            printf("your choice is the first 'fruit'\n");
            break;

        default:
            printf("your choice not exist in our menu\n");
            printf("exit");
            exit(0);




        }




        printf("if you want choice another one press 1 else press 0 to exit");
        scanf("%d",&ch);
    }
    while(ch!=0);




}
