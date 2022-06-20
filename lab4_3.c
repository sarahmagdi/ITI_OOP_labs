#include <stdio.h>
#include <conio.h>

void copy_fun_arr(char *p1,char *p2);


void main (void)
{
    system("cls");

 char copy_arr[40];
    char arr[4]={'a','b','c','\0'};
/*
    for(int i=0;i<40;i++){

      copy_arr[i]='d';

    }*/
   copy_fun_arr(arr,copy_arr);
    printf("values of elements in original array are\n");
    /*for(int i=0;i<3;i++){
      printf("%c\t",arr[i]);
}*/
printf("%s\t",arr);
 printf("\nvalues of elements in array copy are\n");

/*
    for(int i=0;i<3;i++){
      printf("%c\t",copy_arr[i]);
}*/
printf("%s\t",copy_arr);




    getch();
}
void copy_fun_arr(char *p1,char *p2){
    int size=0;
    while(p1[size]!='\0'){
        size++;
    }

for(int i=0;p1!=NULL&&i<size;i++){

*(p2+i)=*(p1+i);


}


p2[size]='\0';

}

