#include<stdio.h>
void change(int);
int main(){
    int i;
    printf("enter the i value:");
    scanf("%d",&i);
    printf("The value of i before change is %d\n", i);
    change(i); 
    printf("The value of i after change is %d\n", i);
    return 0;
}
void change(int i)
{
    i = i * 10;
}