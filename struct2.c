#include<stdio.h>
#include<stdlib.h>
struct str1{
    int area;
    int peri;
};
 int circle(){
    struct str1 a1;
    double  pi=3.14;
    a1.area=pi*(r*r);
    a1.peri=2*pi*r;
    printf("%d/n%d",a1.area,a1.peri);
 }
 int square()
 {
    struct str1 a2;
    int a;
    a2.area=a*a;
    a2.peri=4*a;
     printf("%d/n%d",a2.area,a2.peri);
 }
