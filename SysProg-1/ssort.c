#include <stdio.h>

void ssort(int *pi, size_t size)
{
  int i, k;
  int min, minIndex;

  for (i = 0; i < size - 1; ++i) {
    min = pi[i];
    minIndex = i;
    for (k = i + 1; k < size; ++k)
      if (pi[k] < min) {
	min = pi[k];
	minIndex = k;
      }
    pi[minIndex] = pi[i];
    pi[i] = min;
  }
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
  int a[10] = { 12, 34, 22, 45, 67, 23, 11, 56, 43, 21 };

  ssort(a, 10);
  disp(a, 10);
}
