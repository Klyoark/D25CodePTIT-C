#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* chuanHoaHoTen(char ten[]) {
    char* res = malloc(105);
    res[0] = '\0';
    char* parts = strtok(ten, " ");
    while (parts != NULL) {
        int n = strlen(parts);
        for (int i = 0; i < n; i++) {
            if (parts[i] >= 'A' && parts[i] <= 'Z') {
                parts[i] += 32;
            }
        }
        strcat(res, parts);
        parts = strtok(NULL, " ");
        if (parts != NULL) {
            strcat(res, " ");
        }
    }
    return res;
}

void inEmail(char* fixed_name) {
    char mail[105][105];
    for (int i = 0; i < 105; i++) {
        mail[i][0] = '\0';
    }
    int n = 0;
    char* parts = strtok(fixed_name, " ");
    while (parts != NULL) {
        strcat(mail[n], parts);
        n++;
        parts = strtok(NULL, " ");
    }
    for (int i = 0; i < n - 1; i++) {
        printf("%c", mail[i][0]);
    }
    printf("%s@ptit.edu.vn", mail[n - 1]);

}

int main() {
    char ten[105];
    fgets(ten, 105, stdin);
    ten[strcspn(ten, "\n")] = '\0';
    char* fixed_name = chuanHoaHoTen(ten);
    inEmail(fixed_name);
    free(fixed_name);
}