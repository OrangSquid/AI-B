#include "stdio.h"

int main() {
	int x, espacos, contagem_linhas, contagem_colunas = 0;
	scanf("%d", &x);
	espacos = x * 2 - 2;
	while(contagem_colunas < x) {
		contagem_linhas = 0;
		while(contagem_linhas < espacos) {
			printf(" ");
			contagem_linhas++;
		}
		espacos -= 2;
		contagem_linhas = 0;
		while(contagem_linhas < contagem_colunas + 1) {
			printf("# ");
			contagem_linhas++;
		}
		printf("\n");
		contagem_colunas++;
	}
}
