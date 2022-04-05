#include <stdio.h>
int power(int, int);
void main() {
	int m, n;
	printf("Enter a number : ");
	scanf("%d", &m);
	printf("Enter power : ");
	scanf("%d", &n);
	printf("%d to the power of %d is : %d\n",m,n,power(m,n) ); 
}
int power(int m, int n) {
	if (n==0 ) { 
		return 1; 
	} else {
		return m*power(m,n-1); 
	}
}