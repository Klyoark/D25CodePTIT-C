#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	for (int i = 1; i <= m; i++) {
		if (i <= n) {
			int count = 0;
			for (int j = i; j <= n; j++) {
				printf("%d", j);
				count++;
			}
			int k = n - 1;
			while (count < n) {
				printf("%d", k);
				count++;
				k--;
			}
			printf("\n");
		} else {
			for (int j = i, k = 0; k < n; j--, k++) {
				printf("%d", j);
			}
			printf("\n");
		}
	}
}