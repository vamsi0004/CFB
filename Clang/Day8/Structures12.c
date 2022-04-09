	#include<stdio.h>

struct complex
{
    int r;
    int c;
};

void main(){
    struct complex v1 = {1, 4};
    struct complex v2 = {11, 54}; 
    printf("%di + %dj\n", v1.r, v1.c);
    printf("%di + %dj",v2.r,v2.c);
}