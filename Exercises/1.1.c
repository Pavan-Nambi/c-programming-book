
/*Exercise 1-1. Run this program on your system. Experiment with leaving out parts of the program, to see what error messages you get.*/



/****DONT ok DONT look at this and say its wrong by todays c standrards i know it is duh read fully ok******/ 

#include <stdio.h>
main() {
    printf("hello, world\n");
}

/*****************************************************************************************
 *                
 *
 *
 *                ********************************************************************************/
/*THIS IS WHAT HAPPENED WHEN I TRIED TO REMOVE -ANSI BASICALLY SMTHNG THT ALLOWD U TO RUN LEGACY C CODEBASE... */
/*SO WHEN REMOVED IT SAID OUCH ERROR AS WE NEED TO DEFINE THE RETURN TYPE OF A FUCNTION ok?*/

/*Desktop/c-programming-book/exercises via C v11.4.0-gcc */
/*❯ gcc -ansi 1.1.c*/
/**/
/*Desktop/c-programming-book/exercises via C v11.4.0-gcc */
/*❯ ls*/
/*1.1.c  a.out  README.md*/
/**/
/*Desktop/c-programming-book/exercises via C v11.4.0-gcc */
/*❯ ./a.out*/
/*hello, world*/
/**/
/*Desktop/c-programming-book/exercises via C v11.4.0-gcc */
/*❯ gcc 1.1.c*/
/*1.1.c:5:1: warning: return type defaults to ‘int’ [-Wimplicit-int]*/
/*    5 | main() {*/
/*      | ^~~~*/
/**/
/**/
