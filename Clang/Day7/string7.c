#include<stdio.h>
#include <string.h>

void main(){
    char source[] = "mahesh";
    char target[45];
    strcpy(target, source);

    printf("The target string is %s", target);
    
}