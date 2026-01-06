#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int t;
	scanf("%d\n", &t);
	while(t--) {
		char a[206];
		fgets(a, 206, stdin);
		a[strcspn(a, "\n")] = '\0';

		char* parts = strtok(a, " ");
		int count = 0;
		while (parts != NULL) {
			count++;
			parts = strtok(NULL, " ");
		}
		printf("%d\n", count);
	}
}