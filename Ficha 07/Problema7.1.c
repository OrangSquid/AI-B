#include <stdio.h>

int main() {
	int conj_num[10];
	for(int i = 0 ; i < 10; i++) {
		scanf("%d", &conj_num[i]);
	}
	for(int i = 0 ; i < 10 ; i++) {
		if(conj_num[i] < 0) {
			printf("%d-> -\n", i + 1);
		}
		else {
			printf("%d-> +\n", i + 1);
		}
	}
}
