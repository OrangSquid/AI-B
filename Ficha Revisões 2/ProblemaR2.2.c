#include <string.h>
#include <stdio.h>

int main() {
	char texto[188], palavra_comprida[188] = "", palavra_comparar[188] = "";
	gets(texto);
	for(int i = 0; i < strlen(texto); i++) {
		if(texto[i] != ' ' && !texto[i+1] == '\0') {
			palavra_comparar[strlen(palavra_comparar)] = texto[i];
		}
		else if(texto[i] != ' ' && texto[i+1] == '\0') {
			palavra_comparar[strlen(palavra_comparar)] = texto[i];
			if(strlen(palavra_comprida) < strlen(palavra_comparar)) {
				strcpy(palavra_comprida, palavra_comparar);
				memset(palavra_comparar, 0, strlen(palavra_comparar));
			}
		}
		else if(texto[i] == ' ' && texto[i-1] != ' ') {
			if(strlen(palavra_comprida) < strlen(palavra_comparar)) {
				strcpy(palavra_comprida, palavra_comparar);
				memset(palavra_comparar, 0, strlen(palavra_comparar));
			}
		}
	}
	printf("%s", palavra_comprida);
}
