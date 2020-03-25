#include <stdio.h>
#include <stdlib.h>

char g_bitmap[10][20 + 2];

void flood_fill(int row, int col, char ch)
{
  if (g_bitmap[row][col] == ch || g_bitmap[row][col] == '#')
    return;

  g_bitmap[row][col] = ch;

  flood_fill(row + 1, col, ch);
  flood_fill(row, col + 1, ch);
  flood_fill(row - 1, col, ch);
  flood_fill(row, col - 1, ch);
}

void disp_matrix(void)
{
  int i;

  for (i = 0; i < 10; ++i)
    printf("%s", g_bitmap[i]);
}

int main(void)
{
  FILE *f;
  int i;

  if ((f = fopen("bitmap.txt", "r")) == NULL) {
    fprintf(stderr, "cannot open file!..\n");
    exit(EXIT_FAILURE);
  }

  for (i = 0; fgets(g_bitmap[i], 1000, f) != NULL; ++i)
    ;

  flood_fill(6, 5, '.');

  disp_matrix();

  return 0;

}
