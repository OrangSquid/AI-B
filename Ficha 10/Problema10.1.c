#include "stdio.h"
#include "string.h"

int main() {
	char texto[88];
	gets(texto);
	printf("%c", texto[0]);
	for(int x = 1; x < strlen(texto); x++)
		printf("-%c", texto[x]);
}
