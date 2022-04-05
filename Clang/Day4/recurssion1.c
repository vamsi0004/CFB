#include <stdio.h>
int product(int, int);
void main() {
	int m, n;
	printf("Enter two integer values : ");
	scanf("%d %d", &m, &n);
	printf("Product of %d and %d is : %d\n", m, n, product(m, n));
}
int product(int m, int n) {
	if (m < n) {
		return product(n, m);
	} else if (n == 0) {
		return 0;
	} else {
		return m + product(m, n - 1);
	}
}