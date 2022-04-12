
#include<stdio.h>
#include<malloc.h>
void main()
{
    int *ptr;
    int n=6;
    ptr=(int *)malloc(n*sizeof(int));
    ptr[0]=0;
    ptr[1]=1;
    ptr[2]=2;
    ptr[3]=3;
    ptr[4]=4;
    ptr[5]=5;
    for(int i=0;i<n;i++){
        printf("ptr[%d] : %d\n",i,ptr[i]);
    }
}