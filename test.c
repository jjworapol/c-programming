#include <stdio.h>

/* Copy a single line input to output; 2nd version  */
main()
{  char c;

   while ((c = getchar()) != '\n')
      putchar(c);
}