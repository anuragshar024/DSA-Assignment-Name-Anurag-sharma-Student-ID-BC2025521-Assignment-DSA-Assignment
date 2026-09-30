# DSA-Assignment 
-Name-Anurag-sharma
-Student-ID-BC2025521
-Assignment-DSA-Assignment
This is my first project in Dsa🖥️




Q1. Stack Using Array
Definition of Stack
A Stack is a linear data structure in which insertion and deletion of elements are performed only from one end, called the TOP. A stack follows the LIFO (Last In, First Out) principle, which means the element inserted last is removed first.
Example:
       TOP
        ↓
      | 30 |  ← Last inserted
      |----|
      | 20 |
      |----|
      | 10 |  ← First inserted
      |----|
If we perform POP(), the element 30 will be removed first.

Definition of Array-Based Stack
An array-based stack is a stack implemented using an array to store elements and a variable called TOP to keep track of the position of the topmost element.
Initially:
top = -1;
When an element is inserted, top is increased. When an element is deleted, top is decreased.
Basic Stack Operations

1. PUSH(x)
Definition:
PUSH(x) is an operation used to insert a new element x at the top of the stack.
If the stack is already full, the PUSH operation cannot be performed and Stack Overflow occurs.

2. POP()
Definition:
POP() is an operation used to remove and return the topmost element from the stack.
If the stack is empty, the POP operation cannot be performed and Stack Underflow occurs.

3. PEEK()
Definition:
PEEK() is an operation used to view or return the topmost element of the stack without removing it.
If the stack is empty, there is no top element to display.

4. DISPLAY()
Definition:
DISPLAY() is an operation used to display all the elements present in the stack, starting from the TOP element to the bottom element.
Stack Overflow – Definition
Stack Overflow is a condition that occurs when we try to insert a new element into a stack that is already full.
For a stack of size 5:
10  20  30  40  50
                ↑
               TOP
If we perform:
PUSH(60)
the stack cannot accept the new element, so Stack Overflow occurs.
Condition:
top == MAX - 1
Stack Underflow – Definition
Stack Underflow is a condition that occurs when we try to delete or access an element from a stack that is empty.
For an empty stack:
TOP = -1
If we perform:
POP()
then Stack Underflow occurs.
Condition:
top == -1
Complexity
Operation
Time Complexity
Meaning
PUSH
O(1)
Insert one element
POP
O(1)
Remove one element
PEEK
O(1)
Access top element
DISPLAY
O(n)
Visit all elements
Overall Space Complexity: O(n) because an array of size n is used to store the stack elements.



Circular Queue Using Array

Description

This project implements a Circular Queue using an array in C language.

A Circular Queue follows the FIFO (First In, First Out) principle. Unlike a simple linear queue, it reuses the empty positions created after deletion.

Operations

The queue supports the following operations:

- ENQUEUE(x) - Inserts an element into the queue.
- DEQUEUE() - Removes an element from the front.
- FRONT() - Displays the front element.
- DISPLAY() - Displays all queue elements.
- EXIT - Terminates the program.

Full and Empty Conditions

Empty Queue

The queue is empty when:

"front == -1"

Full Queue

The queue is full when:

"(rear + 1) % SIZE == front"

This condition helps distinguish a full queue from an empty queue.

Circular Queue vs Linear Queue

Feature| Linear Queue| Circular Queue
Memory utilization| Less efficient| Better utilization
Reuses deleted positions| No, normally not| Yes
Rear movement| Only forward| Wraps around
ENQUEUE| O(1)| O(1)
DEQUEUE| O(1)| O(1)
Space| O(n)| O(n)

Why Circular Queue Uses Memory Better

In a linear queue, after some elements are deleted from the beginning, those empty positions generally cannot be reused once "rear" reaches the last array index.

A circular queue solves this problem by connecting the last position back to the first position. Therefore, the queue can reuse previously freed positions.

Problem in Linear Queue

Suppose the queue size is 5:

"[_, _, 30, 40, 50]"

Here, the first two positions are empty. However, if "rear" has already reached index 4, a simple linear queue may report that the queue is full even though two positions are unused.

This situation is called false overflow.

Complexity

Time Complexity

- ENQUEUE: O(1)
- DEQUEUE: O(1)
- FRONT: O(1)
- DISPLAY: O(n)

Space Complexity

- O(n)

where "n" is the size of the queue.
