#include <stdio.h>

int main() {
	int x, y = 0;
	scanf("%d", &x);
	while (x > 0) {
		if (x % 2 == 0) {
			printf("%d\n", x);
			y += x;
		}
		x = x - 1;
	}
	printf("somatorio = %d", y);
}
