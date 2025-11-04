#include <stdio.h>

int main(){

    int Reimu;
    scanf("%d", &Reimu);
    
    if (Reimu == 0){
        printf("0");
    }
    if (Reimu == 1){
        printf("1");
    }
    if (Reimu > 1){
        //first 2 fib nums
        int Yen = 0;
        int Donation = 1;
        int fairy = Reimu - 1;
        printf("%d ", Yen);
        while (fairy--){
            int Money = Donation;
            Donation += Yen;
            Yen = Money;
            printf("%d ", Yen);
        }
    }
}