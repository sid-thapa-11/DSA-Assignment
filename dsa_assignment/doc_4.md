# Program Documentation: Doubly Linked List Implementation

**Program Name:** Doubly Linked List with Insert and Delete Operations  
**Language:** C  
**Author:** Sushan Luitel  
**Course:** COMP202  
**Date:** 08-Feb-2026  

---

## (a) Explanation of Data Structures

The program uses a **Doubly Linked List**.

### Node Structure

```c
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
Each node contains:

data → Stores the value of the node

prev → Pointer to the previous node

next → Pointer to the next node

This structure allows traversal in both forward and backward directions.

Memory for each node is dynamically allocated using malloc().

(b) Description of Functions
1. createNode(int value)
Purpose: Creates and initializes a new node.

Working:

Allocates memory for a new node.

Assigns the given value.

Sets both prev and next to NULL.

2. insertAfter(struct Node* head, int key, int value)
Purpose: Inserts a new node after a specified node.

Working:

Traverse the list to find the node containing key.

If not found, display message.

Create a new node.

Adjust links:

New node’s next → key node’s next

New node’s prev → key node

Update neighboring nodes’ pointers.

3. deleteNode(struct Node* head, int key)
Purpose: Deletes a node containing a specific value.

Working:

Traverse to find node with key.

If not found, display message.

Update links:

Previous node’s next points to next node.

Next node’s prev points to previous node.

Free memory of deleted node.

Return updated head.

4. display(struct Node* head)
Purpose: Displays the list in forward direction.

Working:

Traverse from head to NULL.

Print each node’s data.

(c) Overview of main()
The main() function:

Creates initial nodes (10, 20, 30).

Displays the initial list.

Calls insertAfter() to insert 25 after 20.

Displays updated list.

Calls deleteNode() to delete node with value 30.

Displays final list.

(d) Sample Output
Initial List:
10 <-> 20 <-> 30 <-> NULL

Insert 25 after 20:
10 <-> 20 <-> 25 <-> 30 <-> NULL

Delete node 30:
10 <-> 20 <-> 25 <-> NULL
Conclusion
This program demonstrates:

Implementation of a doubly linked list using structures

Insertion after a given node

Deletion of a node

Proper pointer manipulation

Time Complexity: O(n) for insertion and deletion (due to traversal)
Space Complexity: O(n) for storing nodes