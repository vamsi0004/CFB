#include <stdio.h>
void main() {
	int i, n, factorial = 1;
	printf("Enter an integer : ");
	scanf("%d", &n);
	i = 2;
	do {
		factorial *= i; 
		i++;
	} while ( i<=n); 
	printf("Factorial of given number %d = %d\n", n, factorial);
}