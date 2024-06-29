
/*Exercise 1-13. Write a program to convert its input to lower case, using a
 * function lower(c) which returns c if c is not a letter, and the lower case
 * value of c if it is a letter.*/

#include <stdio.h>
char lower(char character) {
  /*printf("%d",(int)character);*/
  if ((int)character <= 90 && (int)character >= 65) {
    /*printf("%d",(int)character);*/
    return (char)(character + 32);
  } else if ((int)character >= 97 && (int)character <= 122) {
    printf("its already in lower case duhh ");
    return character;
  } else
    return character;
}
int main() {
  int x;

  while ((x = getchar()) != EOF) {
    printf("%c", lower(x));
  }
}



/**/
/*c-programming-book/Exercises on  main [+?] via C v11.4.0-gcc took 9s */
/*❯ cat input.txt*/
/*A*/
/*Z*/
/*B*/
/*C*/
/*D*/
/*a*/
/*b*/
/*@*/
/**/
/*c-programming-book/Exercises on  main [+?] via C v11.4.0-gcc */
/*❯ gcc 1.13.c*/
/**/
/*c-programming-book/Exercises on  main [+?] via C v11.4.0-gcc */
/*❯ ./a.out < input.txt*/
/*a*/
/*z*/
/*b*/
/*c*/
/*d*/
/*its already in lower case duhh a*/
/*its already in lower case duhh b*/
/*@*/
/**/
/*c-programming-book/Exercises on  main [+?] via C v11.4.0-gcc */
/*❯ */
/**/
