#include<stdio.h>
#include <string.h>

void main(){
    char source[56] = "mahesh";
    char target[] = " is a good boy";
    strcat(source, target);
    printf("The source string is %s", source);
}