#include <stdio.h>

int main()
{
  int c, first, last, middle, n, search, array[100];

  printf("");
  scanf("%d", &n);

  printf("", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("");
  scanf("%d", &search);

  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("%d",middle);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("null", search);

  return 0;
}