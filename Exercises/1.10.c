/*Exercise 1-10. Write a program which prints the words in its input, one per
 * line.*/

#include <stdio.h>

int main() {
  int character;

  while ((character = getchar()) != EOF) {
    if (character == ' ' || character == '\n')

      printf("\n");
    else

      printf("%c", character);
  }
}

/**/
/*Desktop/c-programming-book/exercises via C v11.4.0-gcc */
/*❯ ./a.out < input.txt*/
/*idk*/
/*ok*/
/*ok*/
/*okk*/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/**/
/*ok*/
/**/
/*Desktop/c-programming-book/exercises via C v11.4.0-gcc */
/*❯ cat input.txt*/
/*idk                      ok ok okk            ok*/
/**/
/*Desktop/c-programming-book/exercises via C v11.4.0-gcc */
/*❯ */
/**/
/**/
