#include <stdio.h>
#include <conio.h>
int pow_recur_fun(int x,int y);
void main (void)
{
    system("cls");
    int x;
    int y;
    int re;
    printf("enter base number\n");
    scanf("%d",&x);
    printf("enter power of number\n");
    scanf("%d",&y);
    re=pow_recur_fun(x,y);
    printf("the result is %d",re);

    getch();
}
int pow_recur_fun(int x,int y)
{
    if(y==0)
        return 1;
    return x*pow_recur_fun(x,y-1);


}
