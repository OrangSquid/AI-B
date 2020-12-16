#include <stdio.h>
#include <string.h>

int main() {
	char palavra[88];
	gets(palavra);
	for(int x = strlen(palavra) / 2; x < strlen(palavra); x++) {
		printf("%c", palavra[x]);
	}
	for(int x = 0; x < strlen(palavra) / 2; x++) {
		printf("%c", palavra[x]);
	}
}
