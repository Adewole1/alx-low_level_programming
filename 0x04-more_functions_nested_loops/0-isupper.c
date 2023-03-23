#include "main.c"

/**
 * _isupper - Checks if a letter is uppercase
 *
 * @c: letter to be checked
 *
 * Returns: integer 1 or 0
 */

int _isupper(int c)
{
  if (c >= 65 && c <= 90)
    {
      return 1;
    }
  return 0;
}
