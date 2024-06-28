
/*Exercise 1-5. Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.*/


/** this is copy of 1,4 but imma just reverse it babbbyyyyy**/ 




/*Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit
 * table.*/

/**/
/*ok so formulae for celsius to farenhiet is */
/* F = (9/5)C + 32 */
/**/

#include <stdio.h>

int main() {
  float fh, cels = 300;
  /*float 0 coz idk i wanna kn frm 0 degree celsius to idk some shit 100? yeah
   * right ok */
  printf("c to f babbbbyyyyyyyy\n\n");
  while (cels >= 0) {
    fh = (9.0 / 5.0) * cels + 32;
    printf("%4.0f , %4.0f\n", cels, fh);
    cels = cels - 30;
  }
}
