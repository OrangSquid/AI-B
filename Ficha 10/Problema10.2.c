#include "stdio.h"
#include "string.h"

int main() {
	char texto[88];
	gets(texto);
	printf("%c", texto[strlen(texto)-1]);
	for(int x = strlen(texto) - 2; x >= 0; x--)
		printf("-%c", texto[x]);
}
