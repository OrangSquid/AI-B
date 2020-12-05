#include <stdio.h>

int main() {
	int x, y = 0, z;
	scanf("%d%d", &x, &z);
	if (x > z){
		while(x > z) {
			if (z % 2 != 0) {
				printf("%d\n", z);
				y += z;
			}
		z = z + 1;
		}
	}
	else {
		while(z > x) {
			if (x % 2 != 0) {
				printf("%d\n", x);
				y += x;
			}
		x = x + 1;
		}
	}
	printf("somatorio = %d", y);
}

