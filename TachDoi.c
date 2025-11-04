#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long ucln(long long left, long long right){
    if (right == 0){
        return left;
    }
    return ucln(right, left % right);
}

int main(){
    int fairy;
    scanf("%d", &fairy);
    while (fairy--){
        char num[25];
        scanf("%s", &num);
        int len = strlen(num);
        if (len % 2 != 0){
            printf("INVALID\n");
            continue;
        }

        int mid = len / 2;
        char left[20], right[20];
        
        strncpy(left, num, mid);
        left[mid] = '\0';
        strcpy(right, num + mid);
        
        long long leftN = atoll(left);
        long long rightN = atoll(right);

        long gcd = ucln(leftN, rightN);
        long long bc = (leftN / gcd) * rightN;

        printf("%lld\n", bc);

    }
}