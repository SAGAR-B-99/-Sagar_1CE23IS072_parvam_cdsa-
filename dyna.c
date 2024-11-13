#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a=5;
     int *arr=(int *)calloc(a *sizeof(int));
     arr[4]=2;
     arr[5]=4;
     arr[6]=6;
     arr[7]=8;

      printf("%d",arr[7]);

}  