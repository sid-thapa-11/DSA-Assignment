#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Stack operations
void push(char x) { stack[++top] = x; }
char pop() { return stack[top--]; }
char peek() { return stack[top]; }

// Check precedence
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

// Convert infix to postfix
void infixToPostfix(char infix[], char postfix[]) {
    int i, k = 0;
    char ch;

    for (i = 0; infix[i] != '\0'; i++) {
        ch = infix[i];

        // Operand
        if (isalnum(ch)) {
            postfix[k++] = ch;
        }
        // Opening bracket
        else if (ch == '(') {
            push(ch);
        }
        // Closing bracket
        else if (ch == ')') {
            while (peek() != '(')
                postfix[k++] = pop();
            pop(); // remove '('
        }
        // Operator
        else {
            while (top != -1 && precedence(peek()) >= precedence(ch))
                postfix[k++] = pop();
            push(ch);
        }
    }

    while (top != -1)
        postfix[k++] = pop();

    postfix[k] = '\0';
}

// Evaluate postfix
int evaluatePostfix(char postfix[]) {
    int i, a, b;
    int evalStack[MAX];
    int t = -1;

    for (i = 0; postfix[i] != '\0'; i++) {
        char ch = postfix[i];

        if (isdigit(ch)) {
            evalStack[++t] = ch - '0';
        } else {
            b = evalStack[t--];
            a = evalStack[t--];

            switch (ch) {
                case '+': evalStack[++t] = a + b; break;
                case '-': evalStack[++t] = a - b; break;
                case '*': evalStack[++t] = a * b; break;
                case '/': evalStack[++t] = a / b; break;
                case '^': evalStack[++t] = pow(a, b); break;
            }
        }
    }
    return evalStack[t];
}

int main() {
    char infix[MAX], postfix[MAX];

    printf("Enter infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix Expression: %s\n", postfix);

    int result = evaluatePostfix(postfix);
    printf("Evaluation Result: %d\n", result);

    return 0;
}