#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int freq[100005] = {};
    int b[n], count = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if (!freq[a[i]]){
            freq[a[i]]++;
            if (freq[a[i]]){
                b[count++] = a[i];
            }
        }
    }
    for (int i = 0; i < count; i++){
        printf("%d ", b[i]);
    }
}