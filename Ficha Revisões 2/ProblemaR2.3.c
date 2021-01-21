#include <string.h>
#include <stdio.h>

int main() {
	char texto[188], texto_corrigido[188] = "";
	int espaco = 0;
	gets(texto);
	for(int i = 0; i < strlen(texto); i++) {
		if(texto[i] != ' ') {
			texto_corrigido[strlen(texto_corrigido)] = texto[i];
			espaco = 0;
		}
		else if(texto[i] == ' ' && !espaco) {
			texto_corrigido[strlen(texto_corrigido)] = texto[i];
			espaco = 1;
		}
	}
	printf("%s", texto_corrigido);
}
