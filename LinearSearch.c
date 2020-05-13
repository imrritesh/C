#include <stdio.h>
int main()
{
  int array[100], search, c, n;

  printf("Enter number of elements in array: ");
  scanf("%d", &n);

  printf("\nEnter %d integer(s): ", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("\nEnter a number to search: ");
  scanf("%d", &search);

  for (c = 0; c < n; c++)
  {
    if (array[c] == search)    /* If required element is found */
    {
      printf("\n%d is present at location %d.", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("\n%d isn't present in the array.", search);

  return 0;
}
