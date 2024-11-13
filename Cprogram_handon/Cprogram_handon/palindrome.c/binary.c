#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool b =false;
    int x=7,l=0,r=n-1,m=0;
    while(r>=1){
        m=(l+r)/2;
        if(arr[m]==x){
            b=true;
            break;
        }
        if(arr[m]>x){
            r=m-1;
        }else{
            l=m-1;
        }
    }
    if(b){
        printf("yes");
    }
    else{
        printf("no");
    }

}