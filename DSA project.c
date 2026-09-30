Assignment: DSA 
Name: Anurag sharma
Student ID: BC2025521
this is my first project For DSA in c 
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


           //code//





#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

// PUSH operation
void PUSH(int x)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow! Cannot insert %d.\n", x);
    }
    else
    {
        top++;
        stack[top] = x;
        printf("%d pushed into stack.\n", x);
    }
}

// POP operation
void POP()
{
    if (top == -1)
    {
        printf("Stack Underflow! Stack is empty.\n");
    }
    else
    {
        printf("%d popped from stack.\n", stack[top]);
        top--;
    }
}

// PEEK operation
void PEEK()
{
    if (top == -1)
    {
        printf("Stack Underflow! Stack is empty.\n");
    }
    else
    {
        printf("Top element = %d\n", stack[top]);
    }
}

// DISPLAY operation
void DISPLAY()
{
    int i;

    if (top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack elements are:\n");

        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

// Main function
int main()
{
    int choice, x;

    while (1)
    {
        printf("\n--- STACK MENU ---\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. PEEK\n");
        printf("4. DISPLAY\n");
        printf("5. EXIT\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &x);
                PUSH(x);
                break;

            case 2:
                POP();
                break;

            case 3:
                PEEK();
                break;

            case 4:
                DISPLAY();
                break;

            case 5:
                printf("Program terminated.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
