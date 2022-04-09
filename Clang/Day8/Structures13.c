#include<stdio.h>
#include<string.h>

struct complex {
    float r;
    float c;
};
void main()
{
    struct complex v1;
    struct complex v2; 
    printf("enter first complex:");
    scanf("%f %f ",&v1.r ,&v1.c);
    printf("enter second complex:");
    scanf("%f %f ",&v2.r ,&v2.c);
    printf("%di + %dj\n", v1.r, v1.c);
    printf("%di + %dj",v2.r,v2.c);

}