// arrays and pointer
#include<stdio.h>
int main(){
    int marks[3] = {1, 2, 4};
    int* ptr = marks;
    *ptr = 99;
    ptr++;
    *ptr = 98;
    ptr++;
    *ptr = 97;

    printf("The marks scored by student 0 is %d \n", marks[0]);
    printf("The marks scored by student 1 is %d \n", marks[1]);
    printf("The marks scored by student 2 is %d \n", marks[2]);
    return 0;
}