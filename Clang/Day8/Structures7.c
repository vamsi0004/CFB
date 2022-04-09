#include <stdio.h>
struct p {
	int k;
	char c;
};
int p = 10;
void main() {
	struct p x;
	x.k = 10;
	printf("%d %d\n", x.k, p);
}
