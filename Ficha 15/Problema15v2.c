#include <stdio.h>

int main() {
	int conj[4][5], número_moda = 0, contagem_vezes = 0, contagem_moda = 0;
		
	for(int x = 0; x < 4; x++) {
		printf("Introduza os numeros da linha %d\n", x+1);
		for(int y = 0; y < 5; y++) scanf("%d", &conj[x][y]);
	}
	
	for(int x = 0; x < 4; x++) {
		for(int y = 0; y < 5; y++) {
			if(contagem_vezes>contagem_moda) {
				contagem_moda = contagem_vezes;
				número_moda = conj[x][y-1];
			}	
			contagem_vezes=0;
			for(int a = 0; a < 4; a++) {
				for(int b = 0; b < 5; b++) {
					if(conj[x][y]==conj[a][b]) contagem_vezes++;
				}	
			}
		}
	}
	printf("o valor %d (aparece %d vezes)", número_moda, contagem_moda);
}
