#include <stdio.h>
int sum(int);
void main() {
	int n;
	printf("Enter value of n : ");
	scanf("%d", &n);
	printf("Sum of %d natural numbers = %d\n",n,sum(n) ); 
}
int sum(int n) {
	if ( n==1 ) { 
		return 1; 
	} else {
		return n+sum(n-1); 
	}
}