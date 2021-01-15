#include <stdio.h>
#include <string.h>

int main() {
	char palavra[88];
	gets(palavra);
	
	for(int x = 0; x < strlen(palavra); x++) {
		if(palavra[x] == 'a' || palavra[x] == 'e' || palavra[x] == 'i' || palavra[x] == 'o' || palavra[x] == 'u') {
			palavra[x] = '*';
		}
	}
	
	printf("%s", palavra);
}
