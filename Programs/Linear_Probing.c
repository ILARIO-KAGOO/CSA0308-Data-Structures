#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int hash(int key)
{
  return key % SIZE;
}

int probe(int H[], int key)
{
  int index = hash(key);
  int i = 0;
  while (H[(index + i) % SIZE] != 0)
    i++;
  return (index + i) % SIZE;
}

void insert(int H[], int key)
{
  int index = hash(key);

  if (H[index] != 0)
    index = probe(H, key);

  H[index] = key;
}

int search(int H[], int key)
{
  int index = hash(key);
  int i = 0;

  while (H[(index + i) % SIZE] != key)
    i++;

  return (index + i) % SIZE;
}

void display(int H[])
{
  for (int i = 0; i < SIZE; i++)
    printf("%d ", H[i]);
}

int main()
{
  int HT[SIZE] = {0};

  insert(HT, 12);
  insert(HT, 25);
  insert(HT, 35);
  insert(HT, 26);

  printf("Hash table: ");
  display(HT);

  printf("\nKey found at index: %d", search(HT, 35));

  return 0;
}