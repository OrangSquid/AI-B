#include <stdio.h>

int main() {
	int x;
	scanf("%d",&x);
	while (x > 0) {
		printf("A ", x);
		x = x - 1;
	}
}
