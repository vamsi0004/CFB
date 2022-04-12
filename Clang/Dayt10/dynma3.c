#include<stdio.h>
#include<malloc.h>
void main()
{
    float *ptr;
    float n=5;
    ptr=(float*)malloc(n*sizeof(float));
    ptr[0]=10.12;
    ptr[1]=11.22;
    ptr[2]=12.21;
    ptr[3]=13.24;
    ptr[4]=14.30;
    for(int i=0;i<n;i++)
        printf("%f\n",ptr[i]);
}