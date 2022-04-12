
#include<stdio.h>
#include<malloc.h>
void main()
{
    int *ptr;
    int n=6;
    ptr=(int *)calloc(n,sizeof(int));
    ptr[0]=152;
    ptr[1]=211;
    ptr[2]=352;
    ptr[3]=213;
    ptr[4]=14;
    ptr[5]=95;
    for(int i=0;i<n;i++){
        printf("ptr[%d] : %d\n",i,ptr[i]);
    }
}