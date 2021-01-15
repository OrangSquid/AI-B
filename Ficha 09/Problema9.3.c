#include <stdio.h>
#include <string.h>

int main() {
	char palavra1[88], palavra2[88], palavra1_invertida[88];
	gets(palavra1);
	gets(palavra2);
	int contagem = strlen(palavra1) - 1;
	for(int i = 0; strlen(palavra1) > i; i++) {
		palavra1_invertida[i] = palavra1[contagem];
		contagem--;
	}
	printf("%s\n%s", palavra2, palavra1_invertida);
	if(strcmp(palavra2, palavra1_invertida) == 1) {
		printf("\ne capicua");
	}
}
