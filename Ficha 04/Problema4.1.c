#include <stdio.h>

int main() {
	int x, y;
	scanf("%d%d",&x, &y);
	while (y > 0) {
		printf("%d\n", x);
		y = y - 1;
	}
}
