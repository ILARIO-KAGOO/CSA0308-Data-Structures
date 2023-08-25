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

```
OUTPUT:

![Array_Operations](/Output/Array_Operations.png)

---
