#include<Stdio.h>
#include<stdlib.h>
#include<Stdbool.h>
void main()
{
    int arr[]={1,2,3,4,5,6,7,9,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool b=false;
     int x=8,l=0,r=n-1,m=0;
     while(r>=l){
        m=(l+r)/2;//4
        if(arr[m]==x){
            b=true;
            break;
        }
        if(arr[m]>x){
            r=m-1;
        }else{
            l=m+1;
        }
     }
     if(b){
        printf("yes");
     }
     else{
        printf("no");
     }
}