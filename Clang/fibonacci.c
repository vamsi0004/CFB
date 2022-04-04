#include <stdio.h>
void main() {
	int fib1 = 0, fib2 = 1, fib3, n;
	printf("Enter the maximum limit to generate the Fibonacci series : ");
	scanf("%d", &n);
	printf("The Fibonacci series is : %d %d", fib1, fib2);
	for (fib3 =0  ; fib3<=n-8  ; fib3++  ) { 
	fib3=fib1+fib2;
	printf(" %d", fib3);
		fib1 = fib2; 
		fib2 = fib3; 
	}
}