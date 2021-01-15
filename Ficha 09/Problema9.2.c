#include <stdio.h>
#include <string.h>

int main() {
	char palavra1[88];
	char palavra2[88];
	gets(palavra1);
	gets(palavra2);
	int comprimento;
	if(strlen(palavra1) <= strlen(palavra2)) 
		comprimento = strlen(palavra1);
	else
		comprimento = strlen(palavra2);
	for(int i = 0; i < comprimento; i++) 
		printf("%c%c", palavra1[i], palavra2[i]);
	for(int i = comprimento; i < strlen(palavra1); i++)
		printf("%c", palavra1[i]);
	for(int i = comprimento; i < strlen(palavra2); i++) 
		printf("%c", palavra2[i]);
}
