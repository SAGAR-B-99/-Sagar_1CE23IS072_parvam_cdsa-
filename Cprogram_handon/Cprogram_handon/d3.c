#include<stdio.h>
void main()
{
    int i=5,j=10;
    while(i<j--)
    printf("i=%d\n",i);

    while(i<--j)
    printf("i=%d\n",i);

    while(0)
    printf("****\n");

}