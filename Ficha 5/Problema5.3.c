#include <stdio.h>

int main(){ 
    int x, y, mmc, contagem_mmc;
	scanf("%d%d", &x, &y);
	mmc = x * y;
	contagem_mmc = mmc;
	while(contagem_mmc > 0) {
		if(contagem_mmc % x == 0 && contagem_mmc % y == 0) {
			mmc = contagem_mmc;
		}
		contagem_mmc = contagem_mmc - 1;
	}
	printf("%d", mmc);
}
