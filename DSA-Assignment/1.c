#include <stdio.h>
#include <string.h>

#define MAX 100

int isBalanced(char expr[]) {
    char stack[MAX];
    int top = -1;

    for (int i = 0; i < strlen(expr); i++) {
        char ch = expr[i];

        // Opening brackets
        if (ch == '(' || ch == '[' || ch == '{') {
            stack[++top] = ch;
        }
        // Closing brackets
        else if (ch == ')' || ch == ']' || ch == '}') {
            if (top == -1)
                return 0;

            char open = stack[top--];

            if ((ch == ')' && open != '(') ||
                (ch == ']' && open != '[') ||
                (ch == '}' && open != '{')) {
                return 0;
            }
        }
    }

    return top == -1;
}

int main() {
    char expr[MAX];

    printf("Enter expression: ");
    fgets(expr, MAX, stdin);

    if (isBalanced(expr))
        printf("Balanced Parentheses\n");
    else
        printf("Not Balanced\n");

    return 0;
}