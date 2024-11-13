#include<stdio.h>
#include<stdlib.h>
struct str1{
    int area;
    int peri;
};
 int circle(){
    struct str1 a;
    double  pi=3.14;
    a.area=pi*(r*r);
    a.peri=2*pi*r;
    printf("%d/n%d",a.area,a.peri);
 }
 int square()
 {
    struct str1 a;
    int a;
    a.area=a*a;
    a.peri=4*a;
     printf("%d/n%d",a.area,a.peri);
 }
 int  