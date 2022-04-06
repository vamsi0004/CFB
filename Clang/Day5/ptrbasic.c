#include <stdio.h>
void main() {
	int x = 10, y = 9, *p;
	p = &x;
	y = *p;
	*p = 20;
	printf("%d %d", x, y);
}