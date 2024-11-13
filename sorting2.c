#include<Stdio.h>
#include<stdlib.h>
#include<Stdbool.h>
void main(){


    int arr[]={9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=0;
    for(int i=0;i<n;i++){
        int x=arr[i];
        for(int j=i+1;j<n;j++){
        if(arr[j-i]<x){
            x=arr[j-1];
        }
    }
    int t=arr[i];
    arr[i]=x;
    x=t;
    printf("%d",arr[i]);
    }
}