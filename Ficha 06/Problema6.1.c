#include "stdio.h"

int main() {
	int x, contagem_linhas, contagem_colunas = 0;
	scanf("%d", &x);
	while(contagem_colunas < x) {
		contagem_linhas = 0;
		while(contagem_linhas < x) {
			printf("# ");
			contagem_linhas++;
		}
		printf("\n");
		contagem_colunas++;
	}
}
