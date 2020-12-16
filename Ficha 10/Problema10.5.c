#include "stdio.h"
#include "string.h"

int main() {
	char texto[88], contado[88];
	gets(texto);
	for(int x = 0; x < strlen(texto); x++) {
		int contagem_letra = 0, contar = 1;
		char letra = texto[x];
		for(int y = 0; y < strlen(contado); y++) {
			if(contado[y] == letra) contar = 0;
		}
		if(contar) {
			for(int y = 0; y < strlen(texto); y++)
				if(texto[y] == letra) contagem_letra++;
			printf("%c -> %d\n", letra, contagem_letra);
			contado[strlen(contado)] = letra;
		}
	}
}
