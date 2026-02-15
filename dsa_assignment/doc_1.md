Program Documentation: Balanced Parentheses Checker

Program Name: Balanced Parentheses Checker Language: C Author: Siddharth Thapa Date: 07-Feb-2026 Course: COMP202

(a) Explanation of Data Structures The program uses a stack implemented as an array to keep track of opening brackets.

Array: a. char stack[MAX]; – stores the opening brackets encountered in the expression. b. MAX is defined as 100, representing the maximum length of the expression.

Top pointer:

a. int top; – keeps track of the top index of the stack.
b. Initialized to -1 to indicate an empty stack.
This stack allows the program to push opening brackets and pop them when a matching closing bracket is found.

(b) Description of Functions

isBalanced(char expr[])
Purpose: Checks if the given expression has balanced parentheses.

Input: expr[] – a string representing the mathematical expression.

Output: a. Returns 1 (true) if parentheses are balanced. b. Returns 0 (false) if parentheses are not balanced.

Logic:

Traverse the expression character by character.
Push every opening bracket (, [, { onto the stack.
For every closing bracket ), ], }, check: a. If the stack is empty → unbalanced. b. Pop the top element and verify it matches the closing bracket.
After traversal, if the stack is empty → all brackets matched → balanced.
(c) Overview of main()

The main() function organizes the program as follows:

Declares a character array expr[MAX] to store the input expression.
Prompts the user to enter a mathematical expression using fgets().
Calls the isBalanced() function to check the expression.
Prints the result: a. "Balanced Parentheses" if the function returns 1. b. "Not Balanced" if the function returns The main() function handles input, function call, and output display, while the stack logic is encapsulated in isBalanced().
(d) Sample Output

Test Case 1

Input: a + (b - c) * (d Output: Not Balanced

Test Case 2

Input: m + [a - b * (c + d * {m)] Output: Not Balanced

Test Case 3

Input: a + (b - c) Output: Balanced Parentheses