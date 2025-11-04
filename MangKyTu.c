#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}') ||
           (open == '\'' && close == '\'') ||
           (open == '\"' && close == '\"');
}

int main() {
    char s[1000];
    int top = -1;
    char stack[1000];
    
    fgets(s, 1000, stdin);
    
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        char ch = s[i];
        if (ch == '(' || ch == '[' || ch == '{' || ch == '\'' || ch == '\"') {
            stack[++top] = ch;
        }
        else if (ch == ')' || ch == ']' || ch == '}' || ch == '\'' || ch == '\"') {
            if (top == -1 || !isPair(stack[top], ch)) {
                printf("0\n");
                return 0;
            }
            top--;
        }
    }
    if (top != -1) {
        printf("0\n");
    } else {
        printf("1\n");
    }
}

