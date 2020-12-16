#include "stdio.h"
#include "string.h"

int main() {
	char texto[88], letra;
	int contagem_letra = 0;
	gets(texto);
	letra = getchar();
	for(int x = 0; x < strlen(texto); x++) {
		if(texto[x] == letra)
			contagem_letra++;
	}
	printf("%c -> %d", letra, contagem_letra);
}
