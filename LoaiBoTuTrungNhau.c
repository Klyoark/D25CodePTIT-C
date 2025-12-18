#include <stdio.h>
#include <string.h>



int main() {
	char a[1001];
	char b[1001][1001];
	int count = 0;
	fgets(a, 10001, stdin);
	a[strcspn(a, "\n")] = '\0';
	char* parts = strtok(a, " ");

	while (parts != NULL) {
		int dupe = 0;
		for (int i = 0; i < count; i++) {
			if (strcmp(b[i], parts) == 0) {
				dupe = 1;
				break;
			}
		}

		if (!dupe) {
			strcpy(b[count++], parts);
		}
		
		parts = strtok(NULL, " ");
	}

	for (int i = 0; i < count; i++) {
		printf("%s ", b[i]);
	}
}