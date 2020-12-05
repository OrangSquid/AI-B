#include <stdio.h>

int main() {
	int x, y, maior, menor, contagem_menor = 0;
	scanf("%d%d", &x, &y);
	if (x < y) {
		maior = y;
		menor = x;
	}
	else {
		maior = x;
		menor = y;
	}
	while (maior > 0) {
		printf("%d ", maior);
		maior -= 1;
	}
	printf("\n");
	while (contagem_menor <= menor) {
		printf("%d ", contagem_menor);
		contagem_menor += 1;
	}
}
