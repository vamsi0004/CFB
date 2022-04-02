#include<stdio.h>
void main()
{
    int m1=98,m2=35,m3=78;
    int t = m1+m2+m3;
    int avg=t/3;
    if(avg>90)
    printf("A Grade");
    else if(avg>80)
    printf("B Grade");
    
    else if(avg>70)
    printf("C Grade");
    
    else if(avg>60)
    printf("D Grade");
    else
    printf("Fail");
}