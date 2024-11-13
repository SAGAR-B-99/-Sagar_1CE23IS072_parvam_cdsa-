#include<stdio.h>
void main()
{
    int numbers[5]={100,24,270,11};
    printf("%d\n",numbers[0]);
    printf("%d\n",numbers[2]);
    printf("%d\n",*(numbers +2));
    //(numbers + 2*2)
    //*(numbers + 2*2)
    numbers[2]=800;
    *(numbers+2)=1000;
    printf("%d\n",numbers[2]);
}