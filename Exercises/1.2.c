
/*Exercise 1-2. Experiment to find out what happens when printf's argument string contains \x, where x is some character not listed above.*/

/*ok so basically want me to use soem various \whatever shit */

#include <stdio.h>

int main()
{
    printf("hello");
    printf("world");
    printf("/n");
    printf("shit");
    printf("complete \qit \wgoddamit");

    printf("ok \awh\bat to w\srite e\ehre? wr\hite sm\tthng idk\y wha\xtver o\zk lets do soem crazy shit ok yup yup");
}

/* ok so many errors ok 
* 1.2.c: In function ‘main’:
1.2.c:14:38: warning: unknown escape sequence: '\q'
   14 |     printf("complete \qit \wgoddamit");
      |                                      ^
1.2.c:14:38: warning: unknown escape sequence: '\w'
1.2.c:16:117: warning: unknown escape sequence: '\s'
   16 | "ok \awh\bat to w\srite e\ehre? wr\hite sm\tthng idk\y wha\xtver o\zk lets do soem crazy shit ok yup yup");
      |                                                                                                          ^

1.2.c:16:117: warning: unknown escape sequence: '\h'
1.2.c:16:117: warning: unknown escape sequence: '\y'
1.2.c:16:117: error: \x used with no following hex digits
1.2.c:16:117: warning: unknown escape sequence: '\z'

**/
