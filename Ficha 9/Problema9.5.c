#include <stdio.h>
#include <string.h>

int main() {
	char palavra[88];
	int deslocamento;
	gets(palavra);
	scanf("%d", &deslocamento);
	for(int x = 0; x < deslocamento; x++) {
		printf("_");
	}
	for(int x = 0; x < strlen(palavra) - deslocamento; x++) {
		printf("%c", palavra[x]);
	}
}
