#include <stdio.h>

main()
{
  char a[10] = {'a', 'b', 'c', 'd', '\0'};
  char *b = "abcd";
  printf("%s %s\n", a, b);
  printf("%s %s\n", a + 1, b + 2);
}
