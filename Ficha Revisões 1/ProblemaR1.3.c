#include <stdio.h>
#include <string.h>

int main() {
	char palavra1[88], palavra2[88];
	int menor;
	gets(palavra1);
	gets(palavra2);
	
	if(strlen(palavra1) > strlen(palavra2)) {
		menor = strlen(palavra2);
		for(int x = menor; x < strlen(palavra1); x++)
			palavra1[x] = '_';
	} 
	else {
		menor = strlen(palavra1);
		for(int x = menor; x < strlen(palavra2); x++)
			palavra2[x] = '_';
	}
	
	for(int x = 0; x < menor; x++) {
		if(palavra1[x] != palavra2[x]) {
			palavra1[x] = '_';
			palavra2[x] = '_';
		}
	}
	
	printf("%s %s", palavra1, palavra2);
}
