#include<stdio.h>
int max(int,int,int);
void main()
{
    int a=5,b=9,c=3;
    int m=max(a,b,c);
    printf("maximum value is %d",m);
}
int max(int a,int b,int c)
{
    if(a>b&&a>c)
        return a;
    else if(b>c&&b>a)
        return b;
    else 
        return c;
}
