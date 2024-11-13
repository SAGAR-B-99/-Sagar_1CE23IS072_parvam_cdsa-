#include<stdio.h>
#include<stdlib.h>
struct str1{
    int age;
    char ch;
};
int demo1()
{
    str1 a2;
    a2.age=20;
    printf("%d",a2.age);

}
int main()
{
    str1 a1;
    a1.age=10;
    printf("%d",a1.age);
    demo1();

}