#include<stdio.h>
#include<malloc.h>
void main()
{
    int n=7;
    int *ptr;
    ptr=(int*)malloc(10*sizeof(int));
    for(int i=1;i<11;i++)
    {
        ptr[i]=n*i;
    }
    for(int i=0;i<11;i++)
    {
        printf("%d\n",ptr[i]);
    }
    ptr=(int*)realloc(ptr,5*sizeof(int));
    for(int i=11;i<=15;i++)
    {
        ptr[i]=n*i;
    }
    for(int i=11;i<=15;i++)
    {
        printf("%d\n",ptr[i]);
    }
}