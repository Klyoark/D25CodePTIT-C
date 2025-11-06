
#include <stdio.h>

int main(){
    int fairy;
    scanf("%d", &fairy);
    while (fairy--) {
        int Friends;
        scanf("%d", &Friends);
        int Cirno[Friends];
        int Daiyousei[10005] = {0};
        int Brr = 0;

        for (int Ice = 0; Ice < Friends; Ice++) {
            scanf("%d", &Cirno[Ice]);
            Daiyousei[Cirno[Ice]]++;
            if (Daiyousei[Cirno[Ice]] > Brr) {
                Brr = Daiyousei[Cirno[Ice]];
            }
        }

        for (int Ice = 0; Ice < Friends; Ice++) {
            if (Daiyousei[Cirno[Ice]] == Brr) {
                printf("%d ", Cirno[Ice]);
                Daiyousei[Cirno[Ice]] = 0;
            }
        }

        printf("\n");
    }

}