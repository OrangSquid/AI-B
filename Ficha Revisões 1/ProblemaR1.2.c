#include <stdio.h>

int main() {
	int conj_num[10];
	for(int x = 0; x < 10; x++) {
		scanf("%d", &conj_num[x]);
		if(conj_num[x] == 0) {
			for(int y = 0; y < x; y++)
				conj_num[y] = 0;
		}
	}
	for(int x = 0; x < 10; x++)
		printf("%d ", conj_num[x]);
}
