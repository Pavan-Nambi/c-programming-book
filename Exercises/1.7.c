
/*Exercise 1-7. Write a program to copy its input to its output, replacing each
 * string of one or more blanks by a single blank.*/

#include <stdbool.h>
#include <stdio.h>

int main() {
    int character;
    bool am_i_in_space = false; 

    while ((character = getchar()) != EOF) {
        if (character == ' ') {
            if (!am_i_in_space) {
                putchar(' ');
                am_i_in_space = true;  
            }
        } else {
            putchar(character);  
            am_i_in_space = false;
        }
    }

    return 0;
}



/*Desktop/c-programming-book/exercises via C v11.4.0-gcc */
/*❯ ./a.out < input.txt */
/*idk ok ok okk ok*/
/**/
/*Desktop/c-programming-book/exercises via C v11.4.0-gcc */
/*❯ cat input.txt*/
/*idk ok ok okk            ok*/
/**/
/*Desktop/c-programming-book/exercises via C v11.4.0-gcc */
/*❯ */




