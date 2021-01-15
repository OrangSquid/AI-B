#include <stdio.h>

int main() {
	int ate, salto, contagem = 0;
	scanf("%d%d", &ate, &salto);
	while(contagem <= ate) {
		printf("%d ", contagem);
		contagem = contagem + salto;
	}
}
