#include<stdio.h>

typedef struct
{
    int r;
    int c;
}complex;

void main(){
    complex v1 = {1, 4};
    complex v2 = {11, 54}; 
    printf("%di + %dj\n", v1.r, v1.c);
    printf("%di + %dj",v2.r,v2.c);
}