# Program Documentation: Reverse Traversal in a Linked List

**Program Name:** Reverse Traversal of Singly Linked List  
**Language:** C  
**Author:** Siddharth Thapa 
**Course:** COMP202  

---

## (a) Explanation of Data Structures

The program uses a **singly linked list**.

### Node Structure

```c
struct Node {
    int data;
    struct Node* next;
};
data stores the value of the node.

next stores the address of the next node.

The linked list is dynamic and memory is allocated using malloc().

The linked list follows a linear structure where each node points to the next node, and the last node points to NULL.

(b) Description of Functions
1. insertEnd(struct Node* head, int value)
Purpose: Inserts a new node at the end of the linked list.

Working:

Allocates memory for a new node.

Assigns data to the node.

Traverses to the last node.

Links the new node at the end.

2. display(struct Node* head)
Purpose: Performs normal traversal of the linked list.

Working:

Starts from head.

Prints each node’s data.

Moves to the next node until NULL.

3. reverseTraversal(struct Node* head)
Purpose: Traverses the linked list in reverse order using recursion.

Working:

If head == NULL, return.

Recursively call function with head->next.

Print node data while returning from recursion.

This uses the function call stack to achieve reverse order traversal.

(c) Overview of main()
The main() function performs:

Initializes the linked list (head = NULL).

Inserts nodes with values 10, 20, 30, and 40.

Calls display() to show normal traversal.

Calls reverseTraversal() to show reverse traversal.

Ends program.

(d) Sample Output
Output

Normal Traversal:
10 -> 20 -> 30 -> 40 -> NULL

Reverse Traversal:
40 -> 30 -> 20 -> 10 -> NULL
Conclusion
This program demonstrates:

Creation of a singly linked list

Normal traversal of nodes

Reverse traversal using recursion

Use of dynamic memory allocation

Time Complexity: O(n)
Space Complexity: O(n) (due to recursion stack)