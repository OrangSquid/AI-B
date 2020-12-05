#include <stdio.h>
#include <string.h>

int main() {
	int repeticoes;
	char palavra[88];             
	scanf("%d", &repeticoes);
	gets(palavra);
	for(int i = 0; i < repeticoes; i++) {
		printf("%s\n", palavra);
	}
}
