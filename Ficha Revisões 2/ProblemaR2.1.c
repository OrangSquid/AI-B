#include <string.h>
#include <stdio.h>

int main() {
	char texto[188];
	int palavras = 1, contado = 0;
	gets(texto);
	for(int i = 0; i < strlen(texto); i++) {
		if(texto[i] != ' ') {
			contado = 0;
		}
		else if(texto[i] == ' ' && !contado) {
			palavras++;
			contado = 1;
		}
	}
	printf("%d", palavras);
}
