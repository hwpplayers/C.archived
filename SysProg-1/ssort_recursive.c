#include <stdio.h>

void ssort(int *pi, size_t size)
{
  int maxIndex;
  int i, temp;

  if (size == 1)
    return;

  maxIndex = 0;
  for (i = 1; i < size; ++i)
    if (pi[i] > pi[maxIndex])
      maxIndex = i;
  temp = pi[maxIndex];
  pi[maxIndex] = pi[size - 1];
  pi[size - 1] = temp;

  ssort(pi, size - 1);
}

void disp(const int *pi, size_t size)
{
  size_t i;

  for (i = 0; i < size; ++i)
    printf("%d ", pi[i]);
  printf("\n");
}

int main(void)
{
  int a[10] = { 34, 23, 12, -4, 56, 99, 38, -50, 72, 41 };

  disp(a, 10);
  ssort(a, 10);
  disp(a, 10);

  return 0;
}
