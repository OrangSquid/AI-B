#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

void descobrir_letra(char* palavra_magica, char* letras_descobertas, char letra) {
	for(int x = 0; x < strlen(palavra_magica); x++) {
		if(letra == palavra_magica[x])
			letras_descobertas[x*2] = letra;
	}
}

int main() {
	char palavra_magica[88], letras_descobertas[88] = "_", letra;
	setlocale(LC_ALL, "");
	printf("Introduza a palavra mágica: ");
	gets(palavra_magica);
	system("cls");
	
	for(int x = 1; x < strlen(palavra_magica); x++) {
		strcat(letras_descobertas, " _");
	}
	
	descobrir_letra(palavra_magica, letras_descobertas, ' ');
	
	printf("%s\n", letras_descobertas);
	for(int tentativas = 0; tentativas < 3; tentativas++) {
		printf("Introduza uma letra: ");
		scanf("%c", &letra);
		fflush(stdin);
		descobrir_letra(palavra_magica, letras_descobertas, letra);
		printf("%s\n", letras_descobertas);
	}
	
	printf("Introduza a palavra mágica: ");
	gets(letras_descobertas);
	if(strcmp(letras_descobertas, palavra_magica)) {
		printf("errou\n");
		printf("A palavra mágica é: %s", palavra_magica);
	} else {
		printf("ESTÁ CERTA AAAEEEEEEEEE!");
	}
}
