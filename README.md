# CSA0308 - Data Structures

### QN-1 (Matrix_Multiplication):
```c
#include <stdio.h>

int main() 
{
  int m, n, p, q, i, j, k;
  printf("Enter the number of rows and columns of the first matrix: ");
  scanf("%d %d", &m, &n);
  printf("Enter the number of rows and columns of the second matrix: ");
  scanf("%d %d", &p, &q);

  if (n != p) 
  {
    printf("Matrices cannot be multiplied.\n");
    return 0;
  }

  int first[m][n], second[p][q], result[m][q];

  printf("Enter elements of first matrix:\n");
  for (i = 0; i < m; i++) 
  {
    for (j = 0; j < n; j++) 
    {
      scanf("%d", &first[i][j]);
    }
  }

  printf("Enter elements of second matrix:\n");
  for (i = 0; i < p; i++) 
  {
    for (j = 0; j < q; j++) 
    {
      scanf("%d", &second[i][j]);
    }
  }

  for (i = 0; i < m; i++) {
    for (j = 0; j < q; j++) {
      result[i][j] = 0;
      for (k = 0; k < n; k++) {
        result[i][j] += first[i][k] * second[k][j];
      }
    }
  }

  printf("Product of the matrices:\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < q; j++) {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}
```
OUTPUT:

![Matrix_Multiplication](/Output/Matrix_Multiplication.png)

---
### QN-2 (Odd_or_Even):
```c
#include <stdio.h>

int main() 
{
  int n, i, num;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  printf("Enter the elements: \n");
  for (i = 0; i < n; i++) 
  {
    scanf("%d", &num);
    if (num % 2 == 0) 
    {
      printf("%d is even\n", num);
    } 
    else 
    {
      printf("%d is odd\n", num);
    }
  }
  return 0;
}
```
OUTPUT:

![Odd_or_Even](/Output/Odd_or_Even.png)

---

### QN-3 (Factorial_without_Recursion):
```c
#include <stdio.h>

int main() 
{
  int num, i;
  long int fact = 1;
  printf("Enter a number: ");
  scanf("%d", &num);
  for (i = 1; i <= num; i++) 
  {
    fact = fact * i;
  }
  printf("Factorial of %d is: %ld", num, fact);
  return 0;
}
```
OUTPUT:

![Factorial_without_Recursion](/Output/Factorial_without_Recursion.png)

---

### QN-4 (Fibo_without_Recursion):
```c
#include <stdio.h>

int main() 
{
  int n, a = 0, b = 1, c;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: ");
  for (int i = 1; i <= n; i++) 
  {
    printf("%d, ", a);
    c = a + b;
    a = b;
    b = c;
  }
  return 0;
}
```
OUTPUT:

![Fibo_without_Recursion](/Output/Fibo_without_Recursion.png)

---

### QN-5 (Factorial_with_Recursion):
```c
 #include <stdio.h>

long int factorial(int n) 
{
  if (n == 0) 
  {
    return 1;
  } 
  else 
  {
    return n * factorial(n - 1);
  }
}

int main() 
{
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  printf("Factorial of %d = %ld", n, factorial(n));
  return 0;
}
```
OUTPUT:

![Factorial_with_Recursion](/Output/Factorial_with_Recursion.png)

---

### QN-6 (Fibo_with_Recursion):
```c
#include<stdio.h>

int fibo(int a, int b,int c)
{
  if(c == 0)
  {
    return 0;
  }
  else
  {
    int t = a+b;
    printf(", %d ",t);
    fibo(b,t,c=c-1);
  }
}

void main()
{
  int in;
  printf("Enter the range: ");
  scanf("%d",&in);
  printf("0 , 1 ");
  fibo(0,1,in-2);
}
```
OUTPUT:

![Fibo_with_Recursion](/Output/Fibo_with_Recursion.png)

---

### QN-7 (Array_Operations):
```c
#include <stdio.h>

int main() 
{
  int arr[100], n, i, pos, choice;

  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  printf("Enter the elements of the array:\n");
  for (i = 0; i < n; i++) 
  {
    scanf("%d", &arr[i]);
  }

  while (1) 
  {
    printf("\nArray Operations:\n");
    printf("1. Insert an element\n");
    printf("2. Delete an element\n");
    printf("3. Display the array\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) 
    {
      case 1:
        printf("\nEnter the position where you want to insert the element: ");
        scanf("%d", &pos);

        if (pos < 0 || pos > n) 
        {
          printf("Invalid position!\n");
        } 
        else 
        {
          for (i = n - 1; i >= pos; i--) 
          {
            arr[i + 1] = arr[i];
          }

          printf("Enter the element to be inserted: ");
          scanf("%d", &arr[pos]);
          n++;
        }

        break;

      case 2:
        printf("\nEnter the position of the element to be deleted: ");
        scanf("%d", &pos);

        if (pos < 0 || pos >= n) 
        {
          printf("Invalid position!\n");
        } 
        else 
        {
          for (i = pos; i < n - 1; i++) 
          {
            arr[i] = arr[i + 1];
          }

          n--;
        }

        break;

      case 3:
        printf("\nThe elements of the array are:\n");

        for (i = 0; i < n; i++) 
        {
          printf("%d ", arr[i]);
        }

        printf("\n");

        break;

      case 4:
        return 0;

      default:
        printf("\nInvalid choice!\n");
    }
  }
}
```
OUTPUT:

![Array_Operations](/Output/Array_Operations.png)

---

### QN-8 (Linear_Search):
```c
#include <stdio.h>

int main() 
{
  int arr[100], n, i, search;

  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  printf("Enter the elements of the array:\n");
  for (i = 0; i < n; i++) 
  {
    scanf("%d", &arr[i]);
  }

  printf("Enter the element to be searched: ");
  scanf("%d", &search);

  for (i = 0; i < n; i++) 
  {
    if (arr[i] == search) 
    {
      printf("%d is present at location %d.\n", search, i + 1);
      break;
    }
  }

  if (i == n) 
  {
    printf("%d is not present in the array.\n", search);
  }

  return 0;
}
```
OUTPUT:

![Linear_Search](/Output/Linear_Search.png)

---

### QN-9 (Binary_Search):
```c
#include <stdio.h>

int main() 
{
  int arr[100], n, i, search, first, last, middle;

  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  printf("Enter the elements of the array in ascending order:\n");
  for (i = 0; i < n; i++) 
  {
    scanf("%d", &arr[i]);
  }

  printf("Enter the element to be searched: ");
  scanf("%d", &search);

  first = 0;
  last = n - 1;
  middle = (first + last) / 2;

  while (first <= last) 
  {
    if (arr[middle] < search) 
    {
      first = middle + 1;
    } 
    else if (arr[middle] == search) 
    {
      printf("%d is present at location %d.\n", search, middle + 1);
      break;
    } 
    else 
    {
      last = middle - 1;
    }

    middle = (first + last) / 2;
  }

  if (first > last) 
  {
    printf("%d is not present in the array.\n", search);
  }

  return 0;
}
```
OUTPUT:

![Binary_Search](/Output/Binary_Search.png)

---
### QN-10 (Linked_List):
```c
#include <stdio.h>
#include <stdlib.h>

struct node 
{
  int data;
  struct node *next;
};

struct node *head = NULL;

// Insertion at the beginning of the list
void insertAtBeginning(int data) 
{
  struct node *newNode = (struct node*) malloc(sizeof(struct node));
  newNode->data = data;
  newNode->next = head;
  head = newNode;
}

// Insertion at the end of the list
void insertAtEnd(int data) 
{
  struct node *newNode = (struct node*) malloc(sizeof(struct node));
  newNode->data = data;
  newNode->next = NULL;

  if (head == NULL) 
  {
    head = newNode;
    return;
  }

  struct node *current = head;
  while (current->next != NULL) 
  {
    current = current->next;
  }

  current->next = newNode;
}

// Insertion after a given node
void insertAfterNode(struct node *prevNode, int data) 
{
  if (prevNode == NULL) 
  {
    printf("Previous node cannot be NULL.\n");
    return;
  }

  struct node *newNode = (struct node*) malloc(sizeof(struct node));
  newNode->data = data;
  newNode->next = prevNode->next;
  prevNode->next = newNode;
}

// Deletion at the beginning of the list
void deleteAtBeginning() 
{
  if (head == NULL) {
    printf("List is already empty.\n");
    return;
  }

  struct node *temp = head;
  head = head->next;
  free(temp);
}

// Deletion at the end of the list
void deleteAtEnd() 
{
  if (head == NULL) {
    printf("List is already empty.\n");
    return;
  }

  if (head->next == NULL) 
  {
    free(head);
    head = NULL;
    return;
  }

  struct node *current = head;
  while (current->next->next != NULL) 
  {
    current = current->next;
  }

  free(current->next);
  current->next = NULL;
}

// Deletion of a given node
void deleteNode(struct node *prevNode) 
{
  if (prevNode == NULL || prevNode->next == NULL) 
  {
    printf("Previous node cannot be NULL or last node.\n");
    return;
  }

  struct node *temp = prevNode->next;
  prevNode->next = temp->next;
  free(temp);
}

// Displaying the list
void displayList() 
{
  if (head == NULL) 
  {
    printf("List is empty.\n");
    return;
  }

  struct node *current = head;

  printf("List: ");
  
   while(current != NULL)
   {
      printf("%d ", current -> data);
      current=current -> next; 
   }
   printf("\n");
}

int main() {

   insertAtBeginning(5);
   insertAtBeginning(10);
   insertAtEnd(15);
   insertAfterNode(head,20);
   displayList();
   deleteAtBeginning();
   deleteAtEnd();
   deleteNode(head);
   displayList();

   return 0;

}
```
OUTPUT:

![Linked_List](/Output/Linked_List.png)

---
### QN-11 (Stack_Operations):
```c

```
OUTPUT:

![Stack_Operations](/Output/Stack_Operations.png)

---
