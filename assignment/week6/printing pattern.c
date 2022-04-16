#include <stdio.h>
int main() {
	int j, i, k, l;
	l = 0;
	printf("\n");
	for (i = 14; i > 1; i -= 2) {
		j = i;
		while (j > 0) {
			printf(" ");
			j--;
		}
			for (k = 15 - (i + l); k > 0; k--) {
				printf("*");
			}
		printf("\n");
		l++;
	}
	return 0;
}
