#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a=10,b=20,c=30;
    if(a>b && a>c)
    {
        printf("a is greater ");
    }
    if(b>a && b>c)
    {
        printf("b is greater ");
    }
    if(c>a && c>b)
    {
        printf("c is greater ");
    }
}  