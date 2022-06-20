#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int char_arr_len(char *p);


void main (void)
{
    system("cls");
    int n,m;

    printf("enter your array size");
    scanf("%d",&n);

 char **arr_of_pointers;
     arr_of_pointers=( char **)malloc(n *sizeof( char*));
     for(int i=0;i<n;i++){
      printf("\nenter your char array%d size",i+1);
    scanf("%d",&m);
    arr_of_pointers[i] =( char *)malloc(m *sizeof(char));

    printf("write the content of array%d",i+1);
    for(int j=0;j<m;j++){
         scanf("%c",&arr_of_pointers[i][j]);


     }}


/*
     for(int i=0;i<n;i++){
        printf("write the content of array%d\n",i+1);

        for(int j=0;j<m;j++){
         scanf("%c",&arr_of_pointers[i][j]);
          //gets(arr_of_pointers[i][j]);}

     }
     }*/




     for(int i=0;i<n;i++){

      m=char_arr_len(arr_of_pointers[i]);

      printf("data for array %d is",i+1);
       for(int j=0;j<m;j++){
        printf("%c",arr_of_pointers[i][j]);


       }

     }





























for(int i=0;i<n;i++){
    free( arr_of_pointers[i]);


}
free( arr_of_pointers);


    getch();
}



int char_arr_len(char *p){

int size=0;
    while(p[size]!='\0'){

        size++;
    }

   return size;
}


