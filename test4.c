#include<stdio.h>
void main()
{
    int num1,num2,x;
    printf("enter number 1:");
    scanf("%d",&num1);

    printf("enter number 2:");
    scanf("%d",&num2);

    printf("press 1 for add:");
    printf("press 2 for sub:");
    printf("press 3 for multiply:");
    printf("press 4 for division :");
    scanf("%d",&x);

    switch(x)
    {
        case 1:
           printf("additon is %d:",num1+num2);
           break;

        case 2:
           printf("subtraction is %d:",num1-num2);
           break;

        case 3:
           printf("multiplication is %d:",num1*num2);
           break;

        case 4:
           printf("division is %d:",num1/num2);
           break;

        default:
           printf("invalid");


    }
}
