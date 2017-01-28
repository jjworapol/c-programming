#include <stdio.h>

#define IN   1  /* inside a word */
#define OUT  0  /* outside a word */

/* Count lines, words, and characters in input */
main()
{  int c, line_cnt, word_cnt, char_cnt, state;

   state = OUT;
   line_cnt = word_cnt = char_cnt = 0;

   while ((c = getchar()) != EOF) {
      char_cnt++;
      if (c == '\n')
         line_cnt++;
      if (c == ' ' || c == '\n' || c == '\t')
         state = OUT;
      else
         if (state == OUT) {
            state = IN;
            word_cnt++;
         }
   }
   printf("%d %d %d\n", line_cnt, word_cnt, char_cnt);
}