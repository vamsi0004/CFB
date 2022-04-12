
#include<stdio.h>
#include<malloc.h>
void main()
{
    int *ptr;
    int n;
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    ptr[0]=10;
    ptr[1]=11;
    ptr[2]=12;
    ptr[3]=13;
    ptr[4]=14;
    for(int i=0;i<n;i++){
        printf("%d",ptr[i]);
    }
}