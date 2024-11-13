#include<stdio.h>
#include<stdbool.h>
void main()
{
     bool b=true;
    int a=5;
    for(int i=2;i<a;i++){
        if(a%i==0){
            b=false;
            break;

        }
    }if(b=true){
        printf("yes");
    }else{
        printf("no");
    }
}