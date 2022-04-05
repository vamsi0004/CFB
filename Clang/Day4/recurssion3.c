#include <stdio.h>
int sumOfDigits(int);
void main() {
	int n;
	printf("Enter an integer value : ");
	scanf("%d", &n);
	printf("Sum of digits of given number %d = %d\n",n,sumOfDigits(n) ); 
}
int sumOfDigits(int n) {
	if (n==0 ) { 
		return 0; 
	} else {
		return (n%10+sumOfDigits(n/10));
	}
}