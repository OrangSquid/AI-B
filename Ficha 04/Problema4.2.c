#include <stdio.h>

int main() {
	int x, y = 0;
	scanf("%d",&x);
	while (x > 0) {
		y += x;		
		x = x - 1;
	}
	printf("%d", y);
	
}
