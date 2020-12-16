#include "stdio.h"
#include "string.h"

int main() {
	char texto[88], texto_trocado[88];
	gets(texto);
	for(int x = 0; x < strlen(texto); x++) {
		if(x % 2 == 0 && strlen(texto) - 1 == x)
			texto_trocado[x] = texto[x];
		else if(x % 2 == 0) 
			texto_trocado[x] = texto[x+1];
		else 
			texto_trocado[x] = texto[x-1];
	}
	for(int x = 0; x < strlen(texto); x++)
		printf("%c", texto_trocado[x]);
}
