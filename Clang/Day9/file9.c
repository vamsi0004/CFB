#include<stdio.h>
void main()
{
    int i;
    FILE *ptr;
    ptr=fopen("f.txt","r");
    fscanf(ptr,"%d",i);
    printf("the value of i is %d\n",i);
}