#include <stdio.h>
#include <string.h>
 
void chuanhoa(char hovaten[]) {
    char ho[1001] = "";
    char ten[1001] = "";
    char *parts = strtok(hovaten, " ");
    strcpy(ho, parts);

    int n = strlen(ho);
    for (int i = 0; i < n; i++) {
        if (ho[i] >= 'a' && ho[i] <= 'z') {
            ho[i] -= 32;
        }
    }

    parts = strtok(NULL, " ");
    while (parts != NULL) {
        int len = strlen(parts);
        if (parts[0] >= 'a' && parts[0] <= 'z') {
            parts[0] -= 32;
        }
        for (int i = 1; i < len; i++) {
            if (parts[i] <= 'Z' && parts[i] >= 'A') {
                parts[i] += 32;
            }
        }

        strcat(ten, parts);
        parts = strtok(NULL, " ");
        if (parts != NULL) {
            strcat(ten, " ");
        }
    }

    ten[strlen(ten)] = '\0';
    printf("%s, %s\n", ten, ho);
}

int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        char hovaten[1001];
        fgets(hovaten, sizeof(hovaten), stdin);
        hovaten[strcspn(hovaten, "\n")] = '\0';
        chuanhoa(hovaten);
    }
}