
/*Exercise 1-12. Write a program to print a histogram of the lengths of words in
 * its input. It is easiest to draw the histogram horizontally; a vertical
 * orientation is more challenging.*/

#include <stdio.h>

int main() {
  int character;
  int in_word = 0;
  int number_of_words = 0;
  int char_in_word = 0;

  int word_length[20];

  for (int i = 0; i < 20; i++) {
    word_length[i] = 0;
  }

  while ((character = getchar()) != EOF) {
    if (character == '\n' || character == ' ' || character == '\t') {
      if (in_word) {
        if (char_in_word > 0 && char_in_word <= 20) {
          word_length[char_in_word - 1]++;
        }
        char_in_word = 0;
      }
      in_word = 0;
    } else {
      in_word = 1;
      char_in_word++;
    }
  }

  printf("\nHistogram of Word Lengths:\n");
  for (int i = 0; i < 20; i++) {
    printf("%2d: ", i + 1);
    for (int j = 0; j < word_length[i]; j++) {
      printf("*");
    }
    printf("\n");
  }
}


/*c-programming-book/Exercises on  main [?] via C v11.4.0-gcc */
/*❯ gcc 1.12.c*/
/**/
/*c-programming-book/Exercises on  main [?] via C v11.4.0-gcc */
/*❯ ./a.out < input.txt*/
/**/
/*Histogram of Word Lengths:*/
/* 1: */
/* 2: ***/
/* 3: **/
/* 4: */
/* 5: **/
/* 6: */
/* 7: */
/* 8: */
/* 9: */
/*10: */
/*11: */
/*12: */
/*13: */
/*14: */
/*15: */
/*16: */
/*17: */
/*18: */
/*19: */
/*20: */
/**/
/*c-programming-book/Exercises on  main [?] via C v11.4.0-gcc */
/*❯ cat input.txt*/
/*aA idk ok */
/*okkkk*/
/**/
/*c-programming-book/Exercises on  main [?] via C v11.4.0-gcc */
/*❯ */
/**/
