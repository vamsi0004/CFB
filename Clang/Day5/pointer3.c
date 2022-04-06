#include<stdio.h>
int main(){
    int i;
     printf("enter the i value:");
    scanf("%d",&i);
    int *ptr1 = &i;
    int **ptr2 = &ptr1;
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *ptr1);
    printf("The value of i is %d\n", **ptr2);
    return 0;
}