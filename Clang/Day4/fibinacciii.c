
#include<stdio.h>
int fib(int);
int main(){
    int a = 8;
    printf("The element %d of fibonacci series is %d", a, fib(a));
    return 0;
}
int fib(int a){
    if(a == 1 || a==2){
        return 1;
    }
    return(fib(a-1) + fib(a-2));
}