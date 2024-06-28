
/*Exercise 1-6. Write a program to count blanks, tabs, and newlines.*/

#include <stdio.h>

int main() {
  int character, blank, tab, newline;

  blank = tab = newline = 0;
  while ((character = getchar()) != EOF) {
    switch (character) {
    case '\n':
      newline++;
      break;
    case '\t':
      tab++;
      break;
    case ' ':
      blank++;
      break;
    default:
      break;
    }
  }


    printf("number of tab is %d\n",tab);
    printf("number of blank is %d\n",blank);
    printf("number of newlines is %d\n",newline);

}


/*Desktop/c-programming-book/exercises via C v11.4.0-gcc */
/*❯ ./a.out < test_input.txt*/
/*number of tab is 5*/
/*number of blank is 20*/
/*number of newlines is 3*/
/**/
/*Desktop/c-programming-book/exercises via C v11.4.0-gcc */
/*❯ cat test_input.txt*/
/*her name la la la la*/
/*it felt like    ooola ola la */
/*                                 hands la la la fuck la ala la */
/**/
/*Desktop/c-programming-book/exercises via C v11.4.0-gcc */
/*❯ */







