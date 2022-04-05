#include<stdio.h>
int factorial(int);
void main()
{
    int n,f;
    printf("enter a number:");
    scanf("%d",&n);
    f=factorial(n);
    printf("Factorial of %d is %d\n",n,f);
}
int  factorial(int a)
{
    int f;
    if(a==1 ||a==0 )
    {
        return 1;
    }
    else
    {
        f=a*factorial(a-1);
    }
    return f;
}