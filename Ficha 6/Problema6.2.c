#include "stdio.h"

int main() {
	int x, y, contagem_linhas, contagem_colunas = 0;
	scanf("%d%d", &x, &y);
	while(contagem_colunas < x) {
		contagem_linhas = 0;
		while(contagem_linhas < y) {
			printf("# ");
			contagem_linhas++;
		}
		printf("\n");
		contagem_colunas++;
	}
}
