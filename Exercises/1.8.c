
/*Exercise 1-8. Write a program to replace each tab by the three-character sequence >, backspace, -, which prints as >, and each backspace by the similar sequence <. This makes tabs and backspaces visible.*/

#include <stdio.h>

int main() {
  int character;

  while ((character = getchar()) != EOF) {
    if (character == '\t') {
      printf(">,");
    } else if (character == '\b') {
      printf("<-");
    } else {
      putchar(character);
    }
  }

  return 0;
}

/*Desktop/c-programming-book/exercises via C v11.4.0-gcc */
/*❯ ./a.out < input.txt*/
/*idk>,>,>, ok ok okk            ok*/
/**/
/*Desktop/c-programming-book/exercises via C v11.4.0-gcc */
/*❯ cat input.txt*/
/*idk                      ok ok okk            ok*/
/**/
/*Desktop/c-programming-book/exercises via C v11.4.0-gcc */
/*❯ */



