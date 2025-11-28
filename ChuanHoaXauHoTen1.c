#include <stdio.h>
#include <string.h>
#include <ctype.h>


void chuanhoa(char ten[]){
    char result[1001] = "";
    char *parts = strtok(ten, " ");
    while (parts != NULL) {
        int n = strlen(parts);
        if (parts[0] >= 'a' && parts[0] <= 'z') {
            parts[0] -= 32;
        }
        for (int i = 1; i < n; i++) {
            if (parts[i] <= 'Z' && parts[i] >= 'A') {
                parts[i] += 32;
            }
        }
        strcat(result, parts);
        strcat(result, " ");
        parts = strtok(NULL, " ");
    }

    result[strlen(result) - 1] = '\0';
    printf("%s\n", result);
}

int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        char ten[1000];
        fgets(ten, sizeof(ten), stdin);
        ten[strcspn(ten, "\n")] = '\0';
        chuanhoa(ten);
    }
}