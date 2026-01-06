#include <stdio.h>

int main() {

	int o;
	scanf("%d", &o);
	for (int t = 1; t <= o; t++) {
		int m, n;
		scanf("%d %d", &m, &n);
		int a[m][n];
		
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		
		int maxr_idx = -1, maxr_val = -1;
		int maxc_idx = -1, maxc_val = -1;

		int temps = 0;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				temps += a[i][j];
			}
			if (temps > maxr_val) {
				maxr_val = temps;
				maxr_idx = i;
			}
			temps = 0;
		}

		temps = 0;
		for (int j = 0; j < n; j++) {
			for (int i = 0; i < m; i++) {
				if (i != maxr_idx) {
					temps += a[i][j];
				}
			}
			if (temps > maxc_val) {
				maxc_val = temps;
				maxc_idx = j;
			}
			temps = 0;
		}

        printf("Test %d:\n", t);
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (i != maxr_idx && j != maxc_idx) {
					printf("%d ", a[i][j]);
				}
			}
			printf("\n");
		}
	}
	
}