#include <stdio.h>
#include <conio.h>
void main (void){
system("cls");
int array[5],x,count;
printf("enter your num");
scanf("%d",&x);
for(int i=0;x>0;i++){
if(x%2!=0)
array[i]=1;
array[i]=0;
x=x/2;
count++;
}


printf(" num %d by binary is ",x);
for(int i=0;x<=count;i++){
printf("%d ",array[i]);

}




getch();
}
