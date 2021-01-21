#include <string.h>
#include <stdio.h>

int main() {
	char texto[188], palavra_comprida[188] = "", palavra_comparar[188] = "";
	int contado = 0;
	gets(texto);
	for(int i = 0; i < strlen(texto); i++) {
		if(texto[i] != ' ') {
			printf("%d\n", i);
			palavra_comparar[strlen(palavra_comparar)] = texto[i];
			contado = 0;
		}
		else if(texto[i] == ' ' && !contado) {
			contado = 1;
			if(strlen(palavra_comprida) < strlen(palavra_comparar)) {
				strcpy(palavra_comprida, palavra_comparar);
				printf("%s\n", palavra_comparar);
				char palavra_comparar[188] = "\0";
				printf("%s\n", palavra_comparar);
			}
		}
	}
	printf("%s", palavra_comprida);
}
