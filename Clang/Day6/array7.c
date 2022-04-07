#include<stdio.h>
void main(){
    int a[10];
    a[0] = 12;
    a[1] = 13;
    a[2] = 14;
    int * ptr = as; 
    printf("The value at ptr is %d\n", *ptr);
    ptr = ptr + 2;
    printf("The value at ptr is %d\n", *ptr);
}