#include<stdio.h>
void main()
{
    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    if(a%3==0 && a%5==0)
    printf("divisible by 3 & 5");
    else if(a%3==0)
    printf("divisible by 3");
    else if(a%5==0)
    printf("divisible by 5");
    else
    printf("Not divisible by 3 & 5");
}